/* soapStub.h
   Generated by gSOAP 2.8.12 from CAGAccessService.h

Copyright(C) 2000-2012, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"
#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20812
# error "GSOAP VERSION MISMATCH IN GENERATED CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE__ns1__uploadCMAData
#define SOAP_TYPE__ns1__uploadCMAData (8)
/* ns1:uploadCMAData */
class SOAP_CMAC _ns1__uploadCMAData
{
public:
	std::string *sXml;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique id SOAP_TYPE__ns1__uploadCMAData */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__uploadCMAData() { _ns1__uploadCMAData::soap_default(NULL); }
	virtual ~_ns1__uploadCMAData() { }
};
#endif

#ifndef SOAP_TYPE__ns1__uploadCMADataResponse
#define SOAP_TYPE__ns1__uploadCMADataResponse (9)
/* ns1:uploadCMADataResponse */
class SOAP_CMAC _ns1__uploadCMADataResponse
{
public:
	std::string *uploadCMADataResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 9; } /* = unique id SOAP_TYPE__ns1__uploadCMADataResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__uploadCMADataResponse() { _ns1__uploadCMADataResponse::soap_default(NULL); }
	virtual ~_ns1__uploadCMADataResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__uploadCMAHeartbeatInfo
#define SOAP_TYPE__ns1__uploadCMAHeartbeatInfo (10)
/* ns1:uploadCMAHeartbeatInfo */
class SOAP_CMAC _ns1__uploadCMAHeartbeatInfo
{
public:
	std::string *sXml;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 10; } /* = unique id SOAP_TYPE__ns1__uploadCMAHeartbeatInfo */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__uploadCMAHeartbeatInfo() { _ns1__uploadCMAHeartbeatInfo::soap_default(NULL); }
	virtual ~_ns1__uploadCMAHeartbeatInfo() { }
};
#endif

#ifndef SOAP_TYPE__ns1__uploadCMAHeartbeatInfoResponse
#define SOAP_TYPE__ns1__uploadCMAHeartbeatInfoResponse (11)
/* ns1:uploadCMAHeartbeatInfoResponse */
class SOAP_CMAC _ns1__uploadCMAHeartbeatInfoResponse
{
public:
	std::string *uploadCMAHeartbeatInfoResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 11; } /* = unique id SOAP_TYPE__ns1__uploadCMAHeartbeatInfoResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__uploadCMAHeartbeatInfoResponse() { _ns1__uploadCMAHeartbeatInfoResponse::soap_default(NULL); }
	virtual ~_ns1__uploadCMAHeartbeatInfoResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__upLoadCACData
#define SOAP_TYPE__ns1__upLoadCACData (12)
/* ns1:upLoadCACData */
class SOAP_CMAC _ns1__upLoadCACData
{
public:
	std::string *sXml;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 12; } /* = unique id SOAP_TYPE__ns1__upLoadCACData */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__upLoadCACData() { _ns1__upLoadCACData::soap_default(NULL); }
	virtual ~_ns1__upLoadCACData() { }
};
#endif

#ifndef SOAP_TYPE__ns1__upLoadCACDataResponse
#define SOAP_TYPE__ns1__upLoadCACDataResponse (13)
/* ns1:upLoadCACDataResponse */
class SOAP_CMAC _ns1__upLoadCACDataResponse
{
public:
	std::string *upLoadCACDataResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 13; } /* = unique id SOAP_TYPE__ns1__upLoadCACDataResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__upLoadCACDataResponse() { _ns1__upLoadCACDataResponse::soap_default(NULL); }
	virtual ~_ns1__upLoadCACDataResponse() { }
};
#endif

#ifndef SOAP_TYPE___ns1__uploadCMAData
#define SOAP_TYPE___ns1__uploadCMAData (20)
/* Operation wrapper: */
struct __ns1__uploadCMAData
{
public:
	_ns1__uploadCMAData *ns1__uploadCMAData;	/* optional element of type ns1:uploadCMAData */
public:
	int soap_type() const { return 20; } /* = unique id SOAP_TYPE___ns1__uploadCMAData */
};
#endif

#ifndef SOAP_TYPE___ns1__uploadCMAHeartbeatInfo
#define SOAP_TYPE___ns1__uploadCMAHeartbeatInfo (24)
/* Operation wrapper: */
struct __ns1__uploadCMAHeartbeatInfo
{
public:
	_ns1__uploadCMAHeartbeatInfo *ns1__uploadCMAHeartbeatInfo;	/* optional element of type ns1:uploadCMAHeartbeatInfo */
public:
	int soap_type() const { return 24; } /* = unique id SOAP_TYPE___ns1__uploadCMAHeartbeatInfo */
};
#endif

#ifndef SOAP_TYPE___ns1__upLoadCACData
#define SOAP_TYPE___ns1__upLoadCACData (28)
/* Operation wrapper: */
struct __ns1__upLoadCACData
{
public:
	_ns1__upLoadCACData *ns1__upLoadCACData;	/* optional element of type ns1:upLoadCACData */
public:
	int soap_type() const { return 28; } /* = unique id SOAP_TYPE___ns1__upLoadCACData */
};
#endif

#ifndef SOAP_TYPE___ns1__uploadCMAData_
#define SOAP_TYPE___ns1__uploadCMAData_ (30)
/* Operation wrapper: */
struct __ns1__uploadCMAData_
{
public:
	_ns1__uploadCMAData *ns1__uploadCMAData;	/* optional element of type ns1:uploadCMAData */
public:
	int soap_type() const { return 30; } /* = unique id SOAP_TYPE___ns1__uploadCMAData_ */
};
#endif

#ifndef SOAP_TYPE___ns1__uploadCMAHeartbeatInfo_
#define SOAP_TYPE___ns1__uploadCMAHeartbeatInfo_ (32)
/* Operation wrapper: */
struct __ns1__uploadCMAHeartbeatInfo_
{
public:
	_ns1__uploadCMAHeartbeatInfo *ns1__uploadCMAHeartbeatInfo;	/* optional element of type ns1:uploadCMAHeartbeatInfo */
public:
	int soap_type() const { return 32; } /* = unique id SOAP_TYPE___ns1__uploadCMAHeartbeatInfo_ */
};
#endif

#ifndef SOAP_TYPE___ns1__upLoadCACData_
#define SOAP_TYPE___ns1__upLoadCACData_ (34)
/* Operation wrapper: */
struct __ns1__upLoadCACData_
{
public:
	_ns1__upLoadCACData *ns1__upLoadCACData;	/* optional element of type ns1:upLoadCACData */
public:
	int soap_type() const { return 34; } /* = unique id SOAP_TYPE___ns1__upLoadCACData_ */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (35)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 35; } /* = unique id SOAP_TYPE_SOAP_ENV__Header */
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (36)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 36; } /* = unique id SOAP_TYPE_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (38)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 38; } /* = unique id SOAP_TYPE_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (41)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 41; } /* = unique id SOAP_TYPE_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (42)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 42; } /* = unique id SOAP_TYPE_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
