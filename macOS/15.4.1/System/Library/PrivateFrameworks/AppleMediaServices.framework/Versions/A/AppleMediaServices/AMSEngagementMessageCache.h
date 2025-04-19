@interface AMSEngagementMessageCache : NSObject {
    void /* unknown type, empty encoding */ cacheInfo;
}

- (id)init;
- (void).cxx_destruct;
- (void)addWithCachePolicy:(long long)a0 placement:(id)a1 serviceType:(id)a2;
- (id)filterWithMessage:(id)a0;
- (BOOL)isBlockedWithMessageRequest:(id)a0 placement:(id)a1 serviceType:(id)a2;

@end
