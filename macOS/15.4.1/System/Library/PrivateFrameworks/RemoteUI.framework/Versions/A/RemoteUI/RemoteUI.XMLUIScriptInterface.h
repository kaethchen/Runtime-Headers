@interface RemoteUI.XMLUIScriptInterface : NSObject <RemoteUI.XMLUIScriptInterfaceProtocol> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ pageLoader;
}

- (id)init;
- (void).cxx_destruct;
- (void)alert;
- (void)log;
- (id)getElementById:(id)a0;
- (id)loadURL;
- (void)setFieldValue:(id)a0 :(id)a1;
- (id)getFieldValue:(id)a0;
- (void)setPostbackValueForKey:(id)a0 :(id)a1;

@end
