@interface HGConfigurationInternal : NSObject

@property (class, nonatomic, readonly) HGConfigurationInternal *defaultConfig;

@property (nonatomic, retain) void /* unknown type, empty encoding */ mlConfig;
@property (nonatomic, retain) void /* unknown type, empty encoding */ audioFeedbackConfig;
@property (nonatomic) void /* unknown type, empty encoding */ requestPartGestures;
@property (nonatomic) void /* unknown type, empty encoding */ singleDelivery;
@property (nonatomic) void /* unknown type, empty encoding */ enableRawDataLogging;
@property (nonatomic) void /* unknown type, empty encoding */ gesturePartRepeatTimeout;
@property (nonatomic) void /* unknown type, empty encoding */ gesturePartAcceptableNodVelocity;
@property (nonatomic) void /* unknown type, empty encoding */ gesturePartAcceptableShakeVelocity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithML:(id)a0 audioFeedbackConfig:(id)a1;
- (id)initWithMlConfig:(id)a0 audioFeedbackConfig:(id)a1 requestPartGestures:(BOOL)a2;

@end
