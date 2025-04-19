@class NSMutableDictionary, NSMutableArray;

@interface _TUIGeneratorResultAccumulatorCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestCache;
@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (nonatomic) unsigned long long maxSize;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithSize:(unsigned long long)a0;
- (void)emptyCache;
- (id)accumulatorForToken:(id)a0 type:(int)a1;
- (void)addToCache:(id)a0 type:(int)a1;

@end
