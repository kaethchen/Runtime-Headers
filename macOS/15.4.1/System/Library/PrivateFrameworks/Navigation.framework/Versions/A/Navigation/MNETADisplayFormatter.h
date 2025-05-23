@class NSTimeZone, MNWeakTimer, NSDate;
@protocol MNETADisplayFormatterDelegate;

@interface MNETADisplayFormatter : NSObject {
    NSTimeZone *_timeZone;
    MNWeakTimer *_updateTimer;
}

@property (weak, nonatomic) id<MNETADisplayFormatterDelegate> delegate;
@property (nonatomic) double remainingTimeToEndOfRoute;
@property (nonatomic) double remainingTimeToEndOfLeg;
@property (readonly, nonatomic) double displayRemainingTimeToEndOfLeg;
@property (readonly, nonatomic) NSDate *displayETAToEndOfLeg;
@property (readonly, nonatomic) double displayRemainingTimeToEndOfRoute;
@property (readonly, nonatomic) NSDate *displayETAToEndOfRoute;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateTimerFired;
- (id)_displayDateWithRemainingTime:(double)a0;
- (double)_displayTimeIntervalForTimeInterval:(double)a0;
- (void)_scheduleUpdateTimer;
- (void)_updateDisplayETA;
- (id)initWithTimeZone:(id)a0;

@end
