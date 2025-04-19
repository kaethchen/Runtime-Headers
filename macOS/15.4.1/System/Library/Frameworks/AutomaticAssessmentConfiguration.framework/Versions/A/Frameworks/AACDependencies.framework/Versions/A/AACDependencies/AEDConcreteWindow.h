@class NSString, NSNotificationCenter, NSObject, NSWindow;
@protocol OS_dispatch_queue;

@interface AEDConcreteWindow : NSObject <AEDWindow> {
    unsigned int _connectionID;
    NSWindow *_window;
    NSNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) long long windowNumber;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)close;
- (int)refresh;
- (id)observeWindowResizeEventsWithHandler:(id /* block */)a0;
- (int)setRestrictsContentCapture:(BOOL)a0;

@end
