@interface StocksCore.IdentificationService : NSObject <FCUserInfoObserving> {
    void /* unknown type, empty encoding */ lockedSource;
    void /* unknown type, empty encoding */ sensitiveUserDefaults;
    void /* unknown type, empty encoding */ stocksKitDefaults;
    void /* unknown type, empty encoding */ lockedObservers;
}

- (id)init;
- (void).cxx_destruct;
- (void)userInfoDidChangeAdsUserID:(id)a0 fromCloud:(BOOL)a1;
- (void)userInfoDidChangeFeldsparID:(id)a0 fromCloud:(BOOL)a1;

@end
