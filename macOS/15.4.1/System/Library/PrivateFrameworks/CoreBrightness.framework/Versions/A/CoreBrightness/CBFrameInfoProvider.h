@class NSMutableDictionary, CAWindowServerDisplay, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface CBFrameInfoProvider : NSObject {
    NSObject<OS_os_log> *_logHandle;
    CAWindowServerDisplay *_windowServerDisplay;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_observers;
}

- (void)dealloc;
- (id)initWithDisplayServer:(id)a0 andQueue:(id)a1;
- (id)initWithDisplayServer:(id)a0;
- (void)registerObserver:(id)a0 withCallback:(id /* block */)a1;
- (void)unregisterObserver:(id)a0;

@end
