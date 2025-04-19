@interface FLAutoBugHelper : NSObject {
    void /* unknown type, empty encoding */ autoBugCapture;
    void /* unknown type, empty encoding */ eventValue;
    void /* unknown type, empty encoding */ bundleID;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAutoBugCapture:(id)a0 bundleID:(id)a1 eventValue:(id)a2;
- (void)triggerABCWithSubtype:(id)a0;
- (void)triggerABCWithSubtype:(id)a0 additionalEventName:(id)a1;

@end
