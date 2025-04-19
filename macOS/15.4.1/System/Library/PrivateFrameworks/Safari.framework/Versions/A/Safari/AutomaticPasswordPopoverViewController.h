@class NSTextField, NSString, NSTouchBar, NSStackView, NSPopUpButton, NSCustomTouchBarItem, NSGroupTouchBarItem, NSImageView, NSButton, NSBox;
@protocol AutomaticPasswordPopoverViewControllerDelegate;

@interface AutomaticPasswordPopoverViewController : NSViewController <NSTouchBarDelegate, NSTouchBarProvider> {
    NSGroupTouchBarItem *_groupTouchBarItem;
    NSCustomTouchBarItem *_doNotUseTouchBarItem;
    NSCustomTouchBarItem *_useStrongPasswordTouchBarItem;
    NSPopUpButton *_optionsButton;
}

@property (weak, nonatomic) NSImageView *imageView;
@property (weak, nonatomic) NSBox *horizontalDivider;
@property (weak, nonatomic) NSStackView *popoverTitleStackView;
@property (weak, nonatomic) NSTextField *popoverTitleLabel;
@property (weak, nonatomic) NSTextField *descriptionTextField;
@property (weak, nonatomic) NSStackView *rootStackView;
@property (weak, nonatomic) NSStackView *buttonsStackView;
@property (weak, nonatomic) NSButton *doNotUseButton;
@property (weak, nonatomic) NSButton *useStrongPasswordButton;
@property (weak, nonatomic) NSBox *secondHorizontalDivider;
@property (weak, nonatomic) id<AutomaticPasswordPopoverViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (void)keyDown:(id)a0;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_copyStrongPassword:(id)a0;
- (void)_didSelectPasswordOption:(id)a0;
- (void)_doNotUse:(id)a0;
- (id)_doNotUseItem;
- (id)_doNotUseStrongPasswordButtonTitle;
- (void)_editStrongPassword:(id)a0;
- (void)_notifyDelegateToUseStrongPassword:(BOOL)a0;
- (id)_strongPasswordOptionsAttributedStringWithTitle:(id)a0 subtitle:(id)a1;
- (id)_strongPasswordOptionsAutoFillDisplayData;
- (void)_updateStrongPasswordsOptionsMenuItems;
- (void)_useStrongPassword:(id)a0;
- (id)_useStrongPasswordButtonTitle;
- (id)_useStrongPasswordItem;
- (void)doNotUseStrongPassword:(id)a0;
- (void)useStrongPassword:(id)a0;

@end
