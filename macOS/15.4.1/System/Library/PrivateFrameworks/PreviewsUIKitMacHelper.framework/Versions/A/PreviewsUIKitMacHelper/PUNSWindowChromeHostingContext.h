@class UINSWindow, CAContext, NSString;

@interface PUNSWindowChromeHostingContext : NSObject <CALayerDelegate>

@property (retain, nonatomic) UINSWindow *window;
@property (retain, nonatomic) id windowResizeNotificationObserver;
@property (readonly, nonatomic) CAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (id)actionForKey:(id)a0;
- (void)windowDidResize:(id)a0;

@end
