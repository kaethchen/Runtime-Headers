@class NSString, NSWindow;

@interface FLHostViewService : NSServiceViewController <FLExtensionViewServiceInterface> {
    NSWindow *_window;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)loadView;
- (id)serviceViewControllerInterface;
- (void)connectToContextWithSessionID:(id)a0 withCompletion:(id /* block */)a1;

@end
