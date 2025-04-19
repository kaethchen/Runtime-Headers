@class INUIVoiceShortcutHostViewController, INShortcut, NSViewController, NSString;
@protocol INUIAddVoiceShortcutViewControllerDelegate;

@interface INUIAddVoiceShortcutViewController : NSViewController <INUIVoiceShortcutRemoteViewControllerDelegate>

@property (retain, nonatomic) INShortcut *_shortcut;
@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (retain, nonatomic) NSViewController *currentChildViewController;
@property (weak, nonatomic) id<INUIAddVoiceShortcutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)loadView;
- (void)setChildViewController:(id)a0;
- (id)initWithShortcut:(id)a0;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)a0 error:(id)a1;

@end
