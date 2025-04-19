@class NSObject;
@protocol OS_dispatch_queue;

@interface DNDSAuxiliaryStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _presentationModeEnabled;
    BOOL _screenShared;
    BOOL _screenMirrored;
    void *_notificationID;
}

@property (readonly, nonatomic, getter=isPresentationModeEnabled) BOOL presentationModeEnabled;
@property (nonatomic, getter=isScreenShared) BOOL screenShared;
@property (nonatomic, getter=isScreenMirrored) BOOL screenMirrored;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_updateIsInPresentationModeForFrontMostApplication;
- (void)_queue_updateIsInPresentationModeForUIPresentationMode:(id)a0;
- (void)_registerForPresentationModeChanges;

@end
