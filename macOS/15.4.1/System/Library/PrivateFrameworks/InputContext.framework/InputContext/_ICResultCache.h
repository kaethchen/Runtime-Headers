@class NSArray, NSDate;

@interface _ICResultCache : NSObject {
    NSArray *_cachedResults;
    NSDate *_start;
    double _ttlInSeconds;
}

- (void).cxx_destruct;
- (void)clear;
- (id)initWithTTL:(double)a0;
- (void)addResults:(id)a0;
- (BOOL)fuzzyMatchItem:(id)a0 withValue:(id)a1;
- (id)searchWithTrigger:(id)a0;
- (id)searchWithValue:(id)a0;

@end
