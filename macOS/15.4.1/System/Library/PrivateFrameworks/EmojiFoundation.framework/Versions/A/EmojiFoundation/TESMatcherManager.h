@class NSLock, NSMutableDictionary;

@interface TESMatcherManager : NSObject {
    NSLock *_matcherCacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *matcherCache;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_getOrCreateMatcherForLocale:(id)a0;
- (id)matcherForLocale:(id)a0;

@end
