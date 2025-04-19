@interface CSFGMAnalyticsProvider : NSObject {
    void /* unknown type, empty encoding */ dataStore;
    void /* unknown type, empty encoding */ availabilityManager;
    void /* unknown type, empty encoding */ sendFunction;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendAction:(long long)a0 completionHandler:(void (^)(BOOL))a1;

@end
