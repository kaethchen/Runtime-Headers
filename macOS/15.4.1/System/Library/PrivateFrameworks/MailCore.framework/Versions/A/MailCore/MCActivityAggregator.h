@class MCActivityAggregate;

@interface MCActivityAggregator : NSObject

@property (readonly, nonatomic) MCActivityAggregate *in;
@property (readonly, nonatomic) MCActivityAggregate *out;
@property (readonly, nonatomic) MCActivityAggregate *save;
@property (readonly, nonatomic) MCActivityAggregate *synchronizingActivityAggregate;
@property (readonly, nonatomic) MCActivityAggregate *downloadingContentAggregate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activityMonitor:(id)a0 didChangeTypeFrom:(long long)a1;

@end
