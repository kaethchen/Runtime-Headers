@class CNContactAvatarViewController, CNContactNameViewController, NSView, NSString, NSLayoutConstraint;

@interface CNContactAvatarNameCompositeViewController : NSViewController <CNContactCardWidget>

@property (retain) CNContactAvatarViewController *avatarWidgetController;
@property (retain) CNContactNameViewController *nameWidgetController;
@property (retain) NSLayoutConstraint *contentTopInsetConstraint;
@property (retain) NSLayoutConstraint *nameViewExternalAlignmentConstraint;
@property (retain) NSView *externalNameAlignmentView;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)compositeAvatarSize;

- (id)init;
- (void).cxx_destruct;
- (BOOL)commitEditing;
- (BOOL)isTemplate;
- (void)loadView;
- (void)mouseUp:(id)a0;
- (void)setContact:(id)a0;
- (double)customSpacingAfterWidget;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (id)updateKeyViewLoopAndReturnTailView;
- (void)updateTopInsetForDisplayStyle;

@end
