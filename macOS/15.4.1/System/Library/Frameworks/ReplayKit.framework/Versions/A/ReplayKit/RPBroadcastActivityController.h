@class NSString, RPBroadcastActivityViewController;
@protocol RPBroadcastActivityControllerDelegate;

@interface RPBroadcastActivityController : NSObject <RPBroadcastActivityViewControllerDelegate>

@property (retain, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;
@property (weak, nonatomic) id<RPBroadcastActivityControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showBroadcastPickerAtPoint:(struct CGPoint { double x0; double x1; })a0 fromWindow:(id)a1 preferredExtensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)broadcastActivityViewController:(id)a0 didFinishWithBroadcastController:(id)a1 error:(id)a2;

@end
