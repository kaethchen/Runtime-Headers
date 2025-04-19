@class NSScreen, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXManualDisplayLink : NSObject <PXDisplayLinkProtocol>

@property (class, readonly) BOOL supportsSpecificScreen;

@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double resolvedDuration;
@property (readonly, nonatomic) double targetTimestamp;
@property (readonly, nonatomic) double currentMediaTime;
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
- (void)incrementTargetTimeWithInterval:(double)a0;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 queue:(id)a2;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 screen:(id)a2 queue:(id)a3;

@end
