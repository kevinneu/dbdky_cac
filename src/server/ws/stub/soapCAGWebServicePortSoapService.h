/* soapCAGWebServicePortSoapService.h
   Generated by gSOAP 2.8.4 from CAGAccessService.h

Copyright(C) 2000-2011, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapCAGWebServicePortSoapService_H
#define soapCAGWebServicePortSoapService_H
#include "soapH.h"
class SOAP_CMAC CAGWebServicePortSoapService : public soap
{ public:
	/// Constructor
	CAGWebServicePortSoapService();
	/// Constructor with copy of another engine state
	CAGWebServicePortSoapService(const struct soap&);
	/// Constructor with engine input+output mode control
	CAGWebServicePortSoapService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	CAGWebServicePortSoapService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~CAGWebServicePortSoapService();
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Initializer used by constructor
	virtual	void CAGWebServicePortSoapService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	CAGWebServicePortSoapService *copy() SOAP_PURE_VIRTUAL;
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'uploadCMAData' (returns error code or SOAP_OK)
	virtual	int uploadCMAData(_ns1__uploadCMAData *ns1__uploadCMAData, _ns1__uploadCMADataResponse *ns1__uploadCMADataResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'uploadCMAHeartbeatInfo' (returns error code or SOAP_OK)
	virtual	int uploadCMAHeartbeatInfo(_ns1__uploadCMAHeartbeatInfo *ns1__uploadCMAHeartbeatInfo, _ns1__uploadCMAHeartbeatInfoResponse *ns1__uploadCMAHeartbeatInfoResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'upLoadCACData' (returns error code or SOAP_OK)
	virtual	int upLoadCACData(_ns1__upLoadCACData *ns1__upLoadCACData, _ns1__upLoadCACDataResponse *ns1__upLoadCACDataResponse) SOAP_PURE_VIRTUAL;
};
#endif