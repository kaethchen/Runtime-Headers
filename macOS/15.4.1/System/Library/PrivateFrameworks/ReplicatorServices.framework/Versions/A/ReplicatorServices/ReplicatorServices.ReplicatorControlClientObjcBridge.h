@interface ReplicatorServices.ReplicatorControlClientObjcBridge : NSObject {
    void /* unknown type, empty encoding */ controlClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void)setAllowList:(id)a0;
- (id)devices;
- (id)allowList;
- (BOOL)isAllowListEnabled;
- (id)pushToken:(id)a0;

@end
