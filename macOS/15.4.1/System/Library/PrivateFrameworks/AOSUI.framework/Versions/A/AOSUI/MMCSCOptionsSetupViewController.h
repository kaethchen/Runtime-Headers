@class NSTextField, NSTouchBar, NSMatrix, NSString, iCloudTouchBarController, NSButtonCell, NSImageView, NSButton;
@protocol MMCSCOptionsSetupViewControllerDelegate;

@interface MMCSCOptionsSetupViewController : NSViewController <NSTouchBarProvider>

@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCOptionsSetupViewControllerDelegate> delegate;
@property (weak) NSImageView *optionsViewImageView;
@property (weak) NSTextField *optionsViewTitle;
@property (weak) NSTextField *optionsViewMessage;
@property (weak) NSMatrix *optionsViewRadioMatrix;
@property (weak) NSButtonCell *optionsViewComplexRadioButton;
@property (weak) NSButtonCell *optionsViewRandomRadioButton;
@property (weak) NSButtonCell *optionsViewOptOutRadionButton;
@property (weak) NSTextField *optionsViewOptOutInfoLabel;
@property (weak) NSButton *optionsViewHelpButton;
@property (weak) NSButton *optionsViewCancelButton;
@property (weak) NSButton *optionsViewAlternateButton;
@property (weak) NSButton *optionsViewConfirmButton;
@property (readonly) long long advancedOption;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setup:(BOOL)a0;
- (void)alternateButtonClicked:(id)a0;
- (void)defaultButtonClicked:(id)a0;
- (void)otherButtonClicked:(id)a0;

@end
