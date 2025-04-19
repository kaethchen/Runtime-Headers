@class NSMutableDictionary;

@interface RTStateTransitionMotionActivityTypeHistogram : NSObject

@property (retain, nonatomic) NSMutableDictionary *motionActivityTypeBins;

- (id)init;
- (void).cxx_destruct;
- (void)show;
- (void)addMotionActivityType:(unsigned long long)a0;
- (unsigned long long)getDominantMotionActivityType;

@end
