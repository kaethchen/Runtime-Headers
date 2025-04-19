@class NSDate;

@interface _NSVelocityIntegratorDataSample : NSObject

@property (retain, nonatomic) NSDate *time;
@property (nonatomic) struct CGVector { double dx; double dy; } translation;
@property (nonatomic) struct CGPoint { double x; double y; } point;

- (id)description;
- (void).cxx_destruct;
- (void)updateTimeToNow;
- (BOOL)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint { double x0; double x1; })a0 minimumRequiredMovement:(double)a1;

@end
