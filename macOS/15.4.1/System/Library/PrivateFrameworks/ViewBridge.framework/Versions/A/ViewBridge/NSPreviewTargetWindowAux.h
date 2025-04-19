@class NSDictionary, NSEvent, NSPreviewTargetController;

@interface NSPreviewTargetWindowAux : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) NSPreviewTargetController *previewTargetController;
@property unsigned int superSetFrameCommonInProgress;
@property (retain) NSDictionary *mostRecentStateNotificationUserInfo;
@property id localEventMonitor;
@property unsigned long long mostRecentlyRequestedStyleMask;
@property (retain) NSEvent *eventInProgress;
@property BOOL downgradingKey;
@property long long stateRequestIdentifier;

- (void).cxx_destruct;

@end
