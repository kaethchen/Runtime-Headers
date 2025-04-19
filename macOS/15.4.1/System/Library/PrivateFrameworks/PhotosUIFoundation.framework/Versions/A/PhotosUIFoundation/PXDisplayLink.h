@class NSString, NSScreen, NSObject;
@protocol OS_dispatch_queue;

@interface PXDisplayLink : NSObject <PXDisplayLinkProtocol>

@property (class, readonly, nonatomic) BOOL highFramerateRequiresReasonAndRange;
@property (class, readonly) BOOL supportsSpecificScreen;

@property (readonly, nonatomic) NSString *runloopModes;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double resolvedDuration;
@property (readonly, nonatomic) double targetTimestamp;
@property (readonly, nonatomic) double currentMediaTime;
@property (readonly, nonatomic) long long preferredFramesPerSecond;
@property (readonly, weak, nonatomic) NSScreen *screen;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 screen:(id)a2 queue:(id)a3;
- (id)initInternalWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4 screen:(id)a5 queue:(id)a6;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4 queue:(id)a5;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2 runloopModes:(id)a3 preferredFramesPerSecond:(long long)a4 screen:(id)a5 queue:(id)a6;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 preferredFramesPerSecond:(long long)a2;

@end
