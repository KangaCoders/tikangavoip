/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "com.kangacoders.tikangavoip.SipClientProxy.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.titanium.proxy.TiViewProxy.h"

#define TAG "SipClientProxy"

using namespace v8;

		namespace com {
		namespace kangacoders {
		namespace tikangavoip {
			namespace tikangavoip {


Persistent<FunctionTemplate> SipClientProxy::proxyTemplate = Persistent<FunctionTemplate>();
jclass SipClientProxy::javaClass = NULL;

SipClientProxy::SipClientProxy(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void SipClientProxy::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("SipClient");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	exports->Set(nameSymbol, proxyConstructor);
}

void SipClientProxy::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::TiViewProxy::dispose();
}

Handle<FunctionTemplate> SipClientProxy::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("com/kangacoders/tikangavoip/SipClientProxy");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("SipClient");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::TiViewProxy::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<SipClientProxy>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "sendDTMF", SipClientProxy::sendDTMF);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "answer", SipClientProxy::answer);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "unholdCall", SipClientProxy::unholdCall);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "holdCall", SipClientProxy::holdCall);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "SIPregister", SipClientProxy::SIPregister);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "initiateCall", SipClientProxy::initiateCall);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "close", SipClientProxy::close);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "toggleMuted", SipClientProxy::toggleMuted);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "hangup", SipClientProxy::hangup);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(String::NewSymbol("registered"),
			SipClientProxy::getter_registered
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);
	instanceTemplate->SetAccessor(String::NewSymbol("inCall"),
			SipClientProxy::getter_inCall
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);
	instanceTemplate->SetAccessor(String::NewSymbol("onHold"),
			SipClientProxy::getter_onHold
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);
	instanceTemplate->SetAccessor(String::NewSymbol("speakerMode"),
			titanium::Proxy::getProperty
			, SipClientProxy::setter_speakerMode
, Handle<Value>(), DEFAULT);
	instanceTemplate->SetAccessor(String::NewSymbol("muted"),
			SipClientProxy::getter_muted
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> SipClientProxy::sendDTMF(const Arguments& args)
{
	LOGD(TAG, "sendDTMF()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "sendDTMF", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'sendDTMF' with signature '(I)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "sendDTMF: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	
	
		if ((titanium::V8Util::isNaN(args[0]) && !args[0]->IsUndefined()) || args[0]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::answer(const Arguments& args)
{
	LOGD(TAG, "answer()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "answer", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'answer' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::unholdCall(const Arguments& args)
{
	LOGD(TAG, "unholdCall()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "unholdCall", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'unholdCall' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::holdCall(const Arguments& args)
{
	LOGD(TAG, "holdCall()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "holdCall", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'holdCall' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::SIPregister(const Arguments& args)
{
	LOGD(TAG, "SIPregister()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "SIPregister", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'SIPregister' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::initiateCall(const Arguments& args)
{
	LOGD(TAG, "initiateCall()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "initiateCall", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'initiateCall' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "initiateCall: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::close(const Arguments& args)
{
	LOGD(TAG, "close()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "close", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'close' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::toggleMuted(const Arguments& args)
{
	LOGD(TAG, "toggleMuted()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "toggleMuted", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'toggleMuted' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> SipClientProxy::hangup(const Arguments& args)
{
	LOGD(TAG, "hangup()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "hangup", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'hangup' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}

// Dynamic property accessors -------------------------------------------------

Handle<Value> SipClientProxy::getter_registered(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get registered");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "getRegistered", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getRegistered' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}



Handle<Value> SipClientProxy::getter_inCall(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get inCall");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "getInCall", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getInCall' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}



Handle<Value> SipClientProxy::getter_onHold(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get onHold");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "getOnHold", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getOnHold' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}




void SipClientProxy::setter_speakerMode(Local<String> property, Local<Value> value, const AccessorInfo& info)
{
	LOGD(TAG, "set speakerMode");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, speakerMode wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "setSpeakerMode", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setSpeakerMode' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	
	
	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean();
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, info);
}


Handle<Value> SipClientProxy::getter_muted(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get muted");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(SipClientProxy::javaClass, "getMuted", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getMuted' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}




			} // namespace tikangavoip
		} // tikangavoip
		} // kangacoders
		} // com
