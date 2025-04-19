@class NSTimer;
@protocol UINSUIKitTerminationControllerDelegate;

@interface UINSUIKitTerminationController : NSObject

@property (nonatomic) BOOL _isTerminatingUIApplication;
@property (nonatomic) BOOL _backgroundTasksDidTimeOut;
@property (retain, nonatomic) NSTimer *_finalWarningShotTimer;
@property (weak, nonatomic) id<UINSUIKitTerminationControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long backgroundTaskCount;

- (void).cxx_destruct;
- (void)endAppTerminationBackgroundTask;
- (void)_cancelWarningShotTimerIfNecessary;
- (void)_warningShotTimerFired;
- (void)allBackgroundTasksDidFinish;
- (void)beginAppTerminationBackgroundTask;
- (void)beginUIAppTermination;
- (void)cancelBackgroundTaskTimeoutIfNecessary;
- (void)ensureBackgroundTaskCountReachedZeroHandlerExists;
- (void)letBackgroundTasksCompleteWithTimeout:(double)a0;
- (void)synchronouslyExpireBackgroundTasksIfNecessary;
- (void)uiKitWantsToExitProcessWithStatus:(int)a0;

@end
