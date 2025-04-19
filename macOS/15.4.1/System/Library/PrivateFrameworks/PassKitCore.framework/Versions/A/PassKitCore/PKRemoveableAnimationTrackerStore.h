@class NSArray, NSMutableArray;

@interface PKRemoveableAnimationTrackerStore : NSObject {
    NSMutableArray *_trackers;
}

@property (readonly, copy, nonatomic) NSArray *trackers;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)remove;
- (void)preempt;

@end
