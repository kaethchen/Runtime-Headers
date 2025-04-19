@interface AMSUIWebRawPasswordAuthenticateAction : AMSUIWebAction {
    void /* unknown type, empty encoding */ authKitContext;
    void /* unknown type, empty encoding */ canMakeAccountActive;
    void /* unknown type, empty encoding */ customHTTPHeaders;
    void /* unknown type, empty encoding */ ignoreAccountConversion;
    void /* unknown type, empty encoding */ serviceTypes;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
