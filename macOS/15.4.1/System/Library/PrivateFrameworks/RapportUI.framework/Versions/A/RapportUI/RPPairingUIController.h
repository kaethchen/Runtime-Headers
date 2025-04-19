@class NSStoryboard, NSViewController, RPPairingViewController, NSObject, NSWindow;
@protocol OS_dispatch_queue;

@interface RPPairingUIController : NSObject {
    NSStoryboard *_storyboard;
    RPPairingViewController *_vc;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSViewController *presentingViewController;
@property (retain, nonatomic) NSWindow *window;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ retryHandler;
@property (copy, nonatomic) id /* block */ tryPINHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_ensureUIStarted;
- (void)pairingError:(id)a0;
- (void)promptWithFlags:(unsigned int)a0 throttleSeconds:(int)a1;

@end
