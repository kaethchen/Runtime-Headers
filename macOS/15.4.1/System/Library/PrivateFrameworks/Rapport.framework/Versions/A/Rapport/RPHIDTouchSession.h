@class NSNumber, NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDTouchSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSNumber *_touchSessionID;
}

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) id<RPMessageable> messenger;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidateWithCompletion:(id /* block */)a0;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (void)sendTouchEvent:(id)a0 completion:(id /* block */)a1;

@end
