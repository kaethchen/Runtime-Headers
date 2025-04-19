@interface AppStoreKit.OnDeviceSearchHistoryManager : NSObject <_TtP11AppStoreKitP33_2E2C2B4647826CED63A402921B492A6C38JSAppStoreOnDeviceSearchHistoryExports_> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ searchHistoryDefaultsKey;
    void /* unknown type, empty encoding */ maxAllowed;
    void /* unknown type, empty encoding */ onChange;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearRecents;
- (id)fetchRecentsWithLimit:(long long)a0;
- (void)removeRecentSearchTerm:(id)a0;
- (void)saveRecentSearchWithLimit:(id)a0 :(long long)a1;

@end
