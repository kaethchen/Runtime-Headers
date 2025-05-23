@class INUIVoiceShortcutHostViewController, NSString, NSViewController;
@protocol INUIEditVoiceShortcutViewControllerDelegate;

@interface INUIEditVoiceShortcutViewController : NSViewController <INUIVoiceShortcutRemoteViewControllerDelegate>

@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (retain, nonatomic) NSViewController *currentChildViewController;
@property (weak, nonatomic) id<INUIEditVoiceShortcutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)loadView;
- (void)setChildViewController:(id)a0;
- (id)initWithVoiceShortcut:(id)a0;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)a0;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)a0 error:(id)a1;

@end
