@class PXDisplayLink, NSString, NSObject, NSScreen;
@protocol OS_dispatch_queue;

@interface PXAsyncDisplayLink : NSObject <PXDisplayLinkProtocol> {
    PXDisplayLink *_mainQueue_displayLink;
}

@property (class, readonly) BOOL supportsSpecificScreen;

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

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 screen:(id)a2 queue:(id)a3;
- (void)_mainQueue_tick;
- (void)_modifyDisplayLink:(id /* block */)a0;
- (void)_queue_tickTimestamp:(double)a0 duration:(double)a1 targetTimestamp:(double)a2 preferredFramesPerSecond:(long long)a3;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 preferredFramesPerSecond:(long long)a2 screen:(id)a3 queue:(id)a4;

@end
