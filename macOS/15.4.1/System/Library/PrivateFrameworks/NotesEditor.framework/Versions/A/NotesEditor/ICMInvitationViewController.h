@class NSTextField, NSView, NSProgressIndicator, SWAttributionView, SWHighlight, NSImageView, NSButton, ICInvitation;

@interface ICMInvitationViewController : NSViewController

@property (weak, nonatomic) NSView *backgroundView;
@property (weak, nonatomic) NSImageView *invitationImageView;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *subtitleLabel;
@property (weak, nonatomic) NSButton *viewButton;
@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (weak, nonatomic) SWAttributionView *attributionView;
@property (retain, nonatomic) ICInvitation *invitation;
@property (retain, nonatomic) SWHighlight *highlight;
@property (nonatomic) BOOL showsActivityIndicator;
@property (copy, nonatomic) id /* block */ didClickViewButton;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewButtonDidClick:(id)a0;

@end
