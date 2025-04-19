@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    BOOL _alreadyRunning;
}

@property (retain, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithReason:(id)a0 alreadyRunning:(BOOL)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithReason:(id)a0 alreadyRunning:(BOOL)a1;
- (id)mutableAnalyticsEventRepresentation;

@end
