/* soapCAGAccessServiceHttpBindingProxy.h
   Generated by gSOAP 2.8.12 from CAGAccessService.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapCAGAccessServiceHttpBindingProxy_H
#define soapCAGAccessServiceHttpBindingProxy_H
#include "soapH.h"

class SOAP_CMAC CAGAccessServiceHttpBindingProxy : public soap
{ public:
	/// Endpoint URL of service 'CAGAccessServiceHttpBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	CAGAccessServiceHttpBindingProxy();
	/// Construct from another engine state
	CAGAccessServiceHttpBindingProxy(const struct soap&);
	/// Constructor with endpoint URL
	CAGAccessServiceHttpBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	CAGAccessServiceHttpBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	CAGAccessServiceHttpBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	CAGAccessServiceHttpBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~CAGAccessServiceHttpBindingProxy();
	/// Initializer used by constructors
	virtual	void CAGAccessServiceHttpBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'uploadCACData' (returns error code or SOAP_OK)
	virtual	int uploadCACData(_ns1__uploadCACData *ns1__uploadCACData, _ns1__uploadCACDataResponse *ns1__uploadCACDataResponse) { return this->uploadCACData(NULL, NULL, ns1__uploadCACData, ns1__uploadCACDataResponse); }
	virtual	int uploadCACData(const char *endpoint, const char *soap_action, _ns1__uploadCACData *ns1__uploadCACData, _ns1__uploadCACDataResponse *ns1__uploadCACDataResponse);

	/// Web service operation 'downloadCACUpdateFile' (returns error code or SOAP_OK)
	virtual	int downloadCACUpdateFile(_ns1__downloadCACUpdateFile *ns1__downloadCACUpdateFile, _ns1__downloadCACUpdateFileResponse *ns1__downloadCACUpdateFileResponse) { return this->downloadCACUpdateFile(NULL, NULL, ns1__downloadCACUpdateFile, ns1__downloadCACUpdateFileResponse); }
	virtual	int downloadCACUpdateFile(const char *endpoint, const char *soap_action, _ns1__downloadCACUpdateFile *ns1__downloadCACUpdateFile, _ns1__downloadCACUpdateFileResponse *ns1__downloadCACUpdateFileResponse);

	/// Web service operation 'downloadCACLatestVersion' (returns error code or SOAP_OK)
	virtual	int downloadCACLatestVersion(_ns1__downloadCACLatestVersion *ns1__downloadCACLatestVersion, _ns1__downloadCACLatestVersionResponse *ns1__downloadCACLatestVersionResponse) { return this->downloadCACLatestVersion(NULL, NULL, ns1__downloadCACLatestVersion, ns1__downloadCACLatestVersionResponse); }
	virtual	int downloadCACLatestVersion(const char *endpoint, const char *soap_action, _ns1__downloadCACLatestVersion *ns1__downloadCACLatestVersion, _ns1__downloadCACLatestVersionResponse *ns1__downloadCACLatestVersionResponse);

	/// Web service operation 'uploadCACHeartbeatInfo' (returns error code or SOAP_OK)
	virtual	int uploadCACHeartbeatInfo(_ns1__uploadCACHeartbeatInfo *ns1__uploadCACHeartbeatInfo, _ns1__uploadCACHeartbeatInfoResponse *ns1__uploadCACHeartbeatInfoResponse) { return this->uploadCACHeartbeatInfo(NULL, NULL, ns1__uploadCACHeartbeatInfo, ns1__uploadCACHeartbeatInfoResponse); }
	virtual	int uploadCACHeartbeatInfo(const char *endpoint, const char *soap_action, _ns1__uploadCACHeartbeatInfo *ns1__uploadCACHeartbeatInfo, _ns1__uploadCACHeartbeatInfoResponse *ns1__uploadCACHeartbeatInfoResponse);

	/// Web service operation 'uploadCACConfig' (returns error code or SOAP_OK)
	virtual	int uploadCACConfig(_ns1__uploadCACConfig *ns1__uploadCACConfig, _ns1__uploadCACConfigResponse *ns1__uploadCACConfigResponse) { return this->uploadCACConfig(NULL, NULL, ns1__uploadCACConfig, ns1__uploadCACConfigResponse); }
	virtual	int uploadCACConfig(const char *endpoint, const char *soap_action, _ns1__uploadCACConfig *ns1__uploadCACConfig, _ns1__uploadCACConfigResponse *ns1__uploadCACConfigResponse);

	/// Web service operation 'downloadCACHistoryVersion' (returns error code or SOAP_OK)
	virtual	int downloadCACHistoryVersion(_ns1__downloadCACHistoryVersion *ns1__downloadCACHistoryVersion, _ns1__downloadCACHistoryVersionResponse *ns1__downloadCACHistoryVersionResponse) { return this->downloadCACHistoryVersion(NULL, NULL, ns1__downloadCACHistoryVersion, ns1__downloadCACHistoryVersionResponse); }
	virtual	int downloadCACHistoryVersion(const char *endpoint, const char *soap_action, _ns1__downloadCACHistoryVersion *ns1__downloadCACHistoryVersion, _ns1__downloadCACHistoryVersionResponse *ns1__downloadCACHistoryVersionResponse);
};
#endif
