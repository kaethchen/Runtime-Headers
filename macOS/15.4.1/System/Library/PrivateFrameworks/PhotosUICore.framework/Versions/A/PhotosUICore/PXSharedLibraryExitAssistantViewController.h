@class NSButton, NSString;
@protocol PXSharedLibraryExitAssistantViewControllerDelegate;

@interface PXSharedLibraryExitAssistantViewController : PXAssistantTemplateContainerViewController {
    NSButton *_keepAllButton;
    NSButton *_contributedOnlyButton;
    NSString *_keepAllCountsString;
    NSString *_contributedOnlyCountsString;
    BOOL _currentUserIsOwner;
}

@property (nonatomic) long long exitRetentionPolicy;
@property (weak, nonatomic) id<PXSharedLibraryExitAssistantViewControllerDelegate> delegate;
@property (nonatomic) BOOL disableControlsWithBusyIndicator;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)_updateControls;
- (void)_updateRadioButtons;
- (void)_updateWindowStyleMask;
- (void)firstButtonAction:(id)a0;
- (id)initWithOwnerAsCurrentUser:(BOOL)a0 keepAllCountsString:(id)a1 contributedOnlyCountsString:(id)a2;
- (void)policyChanged:(id)a0;

@end
