/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace com {
		namespace kangacoders {
		namespace tikangavoip {
			namespace tikangavoip {


class SipClientProxy : public titanium::Proxy
{
public:
	explicit SipClientProxy(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> initiateCall(const v8::Arguments&);
	static v8::Handle<v8::Value> unholdCall(const v8::Arguments&);
	static v8::Handle<v8::Value> SIPregister(const v8::Arguments&);
	static v8::Handle<v8::Value> hangup(const v8::Arguments&);
	static v8::Handle<v8::Value> holdCall(const v8::Arguments&);
	static v8::Handle<v8::Value> toggleMuted(const v8::Arguments&);
	static v8::Handle<v8::Value> answer(const v8::Arguments&);
	static v8::Handle<v8::Value> sendDTMF(const v8::Arguments&);
	static v8::Handle<v8::Value> close(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static void setter_speakerMode(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_muted(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_onHold(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_registered(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_inCall(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

			} // namespace tikangavoip
		} // tikangavoip
		} // kangacoders
		} // com
