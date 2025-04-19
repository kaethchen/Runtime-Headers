@class NSString, NSDictionary;
@protocol _NSTextAnimatorStateSnapshot, _NSTextAnimation;

@interface _TtC7SwiftUIP33_FB86B422571764190CF2C7C4C92612D412TextAnimator : NSObject <_NSTextAnimator> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ textAnimation;
    void /* unknown type, empty encoding */ variant;
    void /* unknown type, empty encoding */ notify;
    void /* unknown type, empty encoding */ _phase;
    void /* unknown type, empty encoding */ _configuration;
}

@property (nonatomic, readonly) id<_NSTextAnimation> animation;
@property (nonatomic, readonly) double duration;
@property (nonatomic, copy) NSString *toPhase;
@property (nonatomic, readonly) NSString *fromPhase;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, retain) id<_NSTextAnimatorStateSnapshot> stateSnapshot;
@property (nonatomic, readonly) double nextAnimationTriggerDelay;
@property (nonatomic) void /* unknown type, empty encoding */ state;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)pause;
- (void)start;
- (void)cancel;
- (void)startWithDuration:(double)a0;

@end
