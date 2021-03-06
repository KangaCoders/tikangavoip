/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package com.kangacoders.tikangavoip;

import org.appcelerator.kroll.KrollDict;
import org.appcelerator.kroll.KrollProxy;
import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.titanium.TiC;
import org.appcelerator.titanium.util.Log;
import org.appcelerator.titanium.util.TiConfig;
import org.appcelerator.titanium.util.TiConvert;
import org.appcelerator.titanium.proxy.TiViewProxy;
import org.appcelerator.titanium.view.TiCompositeLayout;
import org.appcelerator.titanium.view.TiCompositeLayout.LayoutArrangement;
import org.appcelerator.titanium.view.TiUIView;

import android.app.Activity;
import java.text.ParseException;
import android.net.sip.SipException;


// This proxy can be created by calling Tikangavoip.createExample({message: "hello world"})
@Kroll.proxy(creatableInModule=TikangavoipModule.class)
public class SipClientProxy extends TiViewProxy
{
	// Standard Debugging variables
	private static final String LCAT = "SipClientProxy";
	private static final boolean DBG = TiConfig.LOGD;
private AndroidSIPClient client;
	private class SipClientView extends TiUIView
	{
		public SipClientView(TiViewProxy proxy) {
			super(proxy);
			LayoutArrangement arrangement = LayoutArrangement.DEFAULT;

			if (proxy.hasProperty(TiC.PROPERTY_LAYOUT)) {
				String layoutProperty = TiConvert.toString(proxy.getProperty(TiC.PROPERTY_LAYOUT));
				if (layoutProperty.equals(TiC.LAYOUT_HORIZONTAL)) {
					arrangement = LayoutArrangement.HORIZONTAL;
				} else if (layoutProperty.equals(TiC.LAYOUT_VERTICAL)) {
					arrangement = LayoutArrangement.VERTICAL;
				}
			}
			setNativeView(new TiCompositeLayout(proxy.getActivity(), arrangement));
		}

		@Override
		public void processProperties(KrollDict d)
		{
			super.processProperties(d);
		}
	}


	// Constructor
	public SipClientProxy()
	{
		super();
		this.client = new AndroidSIPClient(this);
	}

	@Override
	public TiUIView createView(Activity activity)
	{
		TiUIView view = new SipClientView(this);
		view.getLayoutParams().autoFillsHeight = true;
		view.getLayoutParams().autoFillsWidth = true;
		return view;
	}

	// Handle creation options
	@Override
	public void handleCreationDict(KrollDict options)
	{
		super.handleCreationDict(options);

		if (options.containsKey("message")) {
			Log.d(LCAT, "example created with message: " + options.get("message"));
		}
	}

	// Methods
	@Kroll.method
	public void SIPregister() throws ParseException, SipException {
		client.register();
	}
	@Kroll.method
	public void answer() throws ParseException, SipException {
		client.answer();
	}
	@Kroll.method
	public void close() throws ParseException, SipException {
		client.close();
	}
	@Kroll.method
	public void hangup() throws ParseException, SipException {
		client.hangup();
	}
	@Kroll.method
	public void holdCall() throws ParseException, SipException {
		client.holdCall();
	}
	@Kroll.method
	public void initiateCall(String address) throws ParseException, SipException {
		client.initiateCall(address);
	}
	@Kroll.method
	public void sendDTMF(int code) throws ParseException, SipException {
		client.sendDTMF(code);
	}
	@Kroll.method
	public void toggleMuted() throws ParseException, SipException {
		client.toggleMuted();
	}

	@Kroll.method
	public void unholdCall() throws ParseException, SipException {
		client.unholdCall();
	}

	@Kroll.getProperty
	public boolean getRegistered() {
		return client.isRegistered();
	}

	@Kroll.getProperty
	public boolean getInCall() {
		return client.isInCall();
	}

	@Kroll.getProperty
	public boolean getMuted() {
		return client.isMuted();
	}

	@Kroll.getProperty
	public boolean getOnHold() {
		return client.isOnHold();
	}

	@Kroll.setProperty
	public void setSpeakerMode(boolean value) {
		client.setSpeakerMode(value);
	}







}
