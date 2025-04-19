@interface FLAutoBugCapture : NSObject {
    void /* unknown type, empty encoding */ nextTimeToTrigger;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)triggerABCWithSubtype:(id)a0 bundleID:(id)a1 eventName:(id)a2 eventValue:(id)a3;

@end
