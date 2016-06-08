var win = Ti.UI.createWindow({
	backgroundColor:'white'
});

var make_call_button = Ti.UI.createButton({
  title: "make test call"
});

var sip = require("com.kangacoders.tikangavoip");

var sipClient = sip.createSipClient({
// username : ...,
// domain : ...,
// password : ...,
// outboundProxy:...,

// autoRegistration : ...,
// sendKeepAlive : true,
// port : ...,
onregistering : function() {
},
onregisterationfailed : function() {
},
onregistrationdone : function() {
},
oncallestablished : function() {
},
oncallended : function() {
},
onincomingcall : function(e) {
},
onringingback : function() {
},
oncallbusy : function() {
},
onerror : function(e) {
}
});

win.add(make_call_button);

win.open();
