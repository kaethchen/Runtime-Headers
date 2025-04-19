@class PKLRUCache;

@interface PKLocalStrokeTracker : NSObject {
    PKLRUCache *_lruCache;
}

@property (readonly, nonatomic) long long strokeLimit;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addStroke:(id)a0;
- (BOOL)isRecentlyCreatedLocalStroke:(id)a0;

@end
