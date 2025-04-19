@class NSString;

@interface TPSAnalyticsEventAnimationLoadTime : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (nonatomic) double animationLoadTime;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 animationLoadTime:(double)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithTipID:(id)a0 animationLoadTime:(double)a1;
- (id)mutableAnalyticsEventRepresentation;

@end
