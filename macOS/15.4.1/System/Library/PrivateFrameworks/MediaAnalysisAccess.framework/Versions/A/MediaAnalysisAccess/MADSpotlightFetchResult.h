@class NSArray, NSMutableArray;

@interface MADSpotlightFetchResult : NSObject {
    NSMutableArray *_sandboxHandles;
}

@property (readonly, nonatomic) NSArray *searchableItems;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSearchableItems:(id)a0 sandboxTokens:(id)a1;

@end
