@class AXETrackingTouchEvent, NSMutableArray;
@protocol NSObject, NSCopying;

@interface _AXETrackingStabilizingTouchHistory : NSObject

@property (retain, nonatomic) id<NSObject, NSCopying> identity;
@property (retain, nonatomic) AXETrackingTouchEvent *firstTouchEvent;
@property (retain, nonatomic) AXETrackingTouchEvent *lastTouchEvent;
@property (readonly, nonatomic) double touchDuration;
@property (retain, nonatomic) NSMutableArray *_stabilizingTouches;
@property (nonatomic) unsigned long long _state;
@property (nonatomic) double _maximumHoldDeviation;
@property (nonatomic) double _minimumHoldDuration;
@property (nonatomic) double _minimumPreStabilizationDuration;
@property (nonatomic) BOOL _allowInstabilityBeforeHold;
@property (nonatomic) BOOL _hasBeenUnstable;

- (id)description;
- (void).cxx_destruct;
- (BOOL)appendTouchEvent:(id)a0;
- (id)initWithMaximumHoldDeviation:(double)a0 minimumHoldDuration:(double)a1 minimumPreStabilizationDuration:(double)a2 allowInstabilityBeforeHold:(BOOL)a3;

@end
