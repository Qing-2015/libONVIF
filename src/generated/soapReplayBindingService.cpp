/* soapReplayBindingService.cpp
   Generated by gSOAP 2.8.55 for rcx.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapReplayBindingService.h"

ReplayBindingService::ReplayBindingService()
{	this->soap = soap_new();
	this->soap_own = true;
	ReplayBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ReplayBindingService::ReplayBindingService(const ReplayBindingService& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
}

ReplayBindingService::ReplayBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	ReplayBindingService_init(_soap->imode, _soap->omode);
}

ReplayBindingService::ReplayBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	ReplayBindingService_init(iomode, iomode);
}

ReplayBindingService::ReplayBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	ReplayBindingService_init(imode, omode);
}

ReplayBindingService::~ReplayBindingService()
{	if (this->soap_own)
		soap_free(this->soap);
}

void ReplayBindingService::ReplayBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
        {"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
        {"saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL},
        {"saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL},
        {"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
        {"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
        {"wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", NULL, NULL},
        {"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
        {"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
        {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
        {"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
        {"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
        {"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
        {"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
        {"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
        {"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
        {"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
        {"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
        {"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
        {"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
        {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
        {"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
        {"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
        {"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
        {"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
        {"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
        {"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
        {"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
        {"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
        {"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
        {"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

void ReplayBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void ReplayBindingService::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	ReplayBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
ReplayBindingService *ReplayBindingService::copy()
{	ReplayBindingService *dup = SOAP_NEW_COPY(ReplayBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

ReplayBindingService& ReplayBindingService::operator=(const ReplayBindingService& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
	}
	return *this;
}

int ReplayBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int ReplayBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int ReplayBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int ReplayBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int ReplayBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int ReplayBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void ReplayBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ReplayBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *ReplayBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void ReplayBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void ReplayBindingService::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
{	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsdd__AppSequence = wsdd__AppSequence;
}

::SOAP_ENV__Header *ReplayBindingService::soap_header()
{	return this->soap->header;
}

#ifndef WITH_NOIO
int ReplayBindingService::run(int port)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int ReplayBindingService::ssl_run(int port)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}
#endif

SOAP_SOCKET ReplayBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET ReplayBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int ReplayBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif
#endif

int ReplayBindingService::serve()
{
#ifndef WITH_FASTCGI
	this->soap->keep_alive = this->soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->soap->keep_alive > 0 && this->soap->max_keep_alive > 0)
			this->soap->keep_alive--;
#endif
		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if ((dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap))) && this->soap->error && this->soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___trp__GetServiceCapabilities(struct soap*, ReplayBindingService*);
static int serve___trp__GetReplayUri(struct soap*, ReplayBindingService*);
static int serve___trp__GetReplayConfiguration(struct soap*, ReplayBindingService*);
static int serve___trp__SetReplayConfiguration(struct soap*, ReplayBindingService*);

int ReplayBindingService::dispatch()
{	return dispatch(this->soap);
}

int ReplayBindingService::dispatch(struct soap* soap)
{
	ReplayBindingService_init(soap->imode, soap->omode);

	soap_peek_element(soap);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "trp:GetServiceCapabilities")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/replay/wsdl/GetServiceCapabilities")))
		return serve___trp__GetServiceCapabilities(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "trp:GetReplayUri")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/replay/wsdl/GetReplayUri")))
		return serve___trp__GetReplayUri(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "trp:GetReplayConfiguration")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/replay/wsdl/GetReplayConfiguration")))
		return serve___trp__GetReplayConfiguration(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "trp:SetReplayConfiguration")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/replay/wsdl/SetReplayConfiguration")))
		return serve___trp__SetReplayConfiguration(soap, this);
	return soap->error = SOAP_NO_METHOD;
}

static int serve___trp__GetServiceCapabilities(struct soap *soap, ReplayBindingService *service)
{	struct __trp__GetServiceCapabilities soap_tmp___trp__GetServiceCapabilities;
	_trp__GetServiceCapabilitiesResponse trp__GetServiceCapabilitiesResponse;
	trp__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___trp__GetServiceCapabilities(soap, &soap_tmp___trp__GetServiceCapabilities);
	if (!soap_get___trp__GetServiceCapabilities(soap, &soap_tmp___trp__GetServiceCapabilities, "-trp:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetServiceCapabilities(soap_tmp___trp__GetServiceCapabilities.trp__GetServiceCapabilities, trp__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	trp__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || trp__GetServiceCapabilitiesResponse.soap_put(soap, "trp:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || trp__GetServiceCapabilitiesResponse.soap_put(soap, "trp:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___trp__GetReplayUri(struct soap *soap, ReplayBindingService *service)
{	struct __trp__GetReplayUri soap_tmp___trp__GetReplayUri;
	_trp__GetReplayUriResponse trp__GetReplayUriResponse;
	trp__GetReplayUriResponse.soap_default(soap);
	soap_default___trp__GetReplayUri(soap, &soap_tmp___trp__GetReplayUri);
	if (!soap_get___trp__GetReplayUri(soap, &soap_tmp___trp__GetReplayUri, "-trp:GetReplayUri", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetReplayUri(soap_tmp___trp__GetReplayUri.trp__GetReplayUri, trp__GetReplayUriResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	trp__GetReplayUriResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || trp__GetReplayUriResponse.soap_put(soap, "trp:GetReplayUriResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || trp__GetReplayUriResponse.soap_put(soap, "trp:GetReplayUriResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___trp__GetReplayConfiguration(struct soap *soap, ReplayBindingService *service)
{	struct __trp__GetReplayConfiguration soap_tmp___trp__GetReplayConfiguration;
	_trp__GetReplayConfigurationResponse trp__GetReplayConfigurationResponse;
	trp__GetReplayConfigurationResponse.soap_default(soap);
	soap_default___trp__GetReplayConfiguration(soap, &soap_tmp___trp__GetReplayConfiguration);
	if (!soap_get___trp__GetReplayConfiguration(soap, &soap_tmp___trp__GetReplayConfiguration, "-trp:GetReplayConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetReplayConfiguration(soap_tmp___trp__GetReplayConfiguration.trp__GetReplayConfiguration, trp__GetReplayConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	trp__GetReplayConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || trp__GetReplayConfigurationResponse.soap_put(soap, "trp:GetReplayConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || trp__GetReplayConfigurationResponse.soap_put(soap, "trp:GetReplayConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___trp__SetReplayConfiguration(struct soap *soap, ReplayBindingService *service)
{	struct __trp__SetReplayConfiguration soap_tmp___trp__SetReplayConfiguration;
	_trp__SetReplayConfigurationResponse trp__SetReplayConfigurationResponse;
	trp__SetReplayConfigurationResponse.soap_default(soap);
	soap_default___trp__SetReplayConfiguration(soap, &soap_tmp___trp__SetReplayConfiguration);
	if (!soap_get___trp__SetReplayConfiguration(soap, &soap_tmp___trp__SetReplayConfiguration, "-trp:SetReplayConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetReplayConfiguration(soap_tmp___trp__SetReplayConfiguration.trp__SetReplayConfiguration, trp__SetReplayConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	trp__SetReplayConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || trp__SetReplayConfigurationResponse.soap_put(soap, "trp:SetReplayConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || trp__SetReplayConfigurationResponse.soap_put(soap, "trp:SetReplayConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
