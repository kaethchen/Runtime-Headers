@class NSTimer, NSMutableArray;

@interface NSVB_ViewServiceFencingController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_pendingFenceSendRights;
    NSMutableArray *_proxies;
    NSMutableArray *_resumeActions;
    unsigned long long _resumedFencingProxyCount;
    NSTimer *_fencingControlTimeoutTimer;
}

+ (id)activeFencePort;

- (void)dealloc;
- (id)init;
- (void)_fencingControlTimedOut;
- (BOOL)fencingControlProxy:(id)a0 didBeginFencingWithSendRight:(id)a1;
- (BOOL)fencingControlProxy:(id)a0 didEndFencingWithSendRight:(id)a1;
- (void)forgetFencingMessagesForFencingControlProxy:(id)a0;

@end
