@class NSTextField, NSString, AKSignatureDescriptionInputViewController_Mac, NSPopUpButton, NSPopover;
@protocol AKSignatureDescriptionDelegate;

@interface AKSignatureDescriptionViewController_Mac : NSViewController <AKSignatureCustomDescriptionDelegate>

@property (weak, nonatomic) NSTextField *label;
@property (weak, nonatomic) NSPopUpButton *descriptionOptionPopUpButton;
@property (retain, nonatomic) NSPopover *customInputPopover;
@property (copy) NSString *customDescription;
@property (retain) AKSignatureDescriptionInputViewController_Mac *inputViewController;
@property (weak) id<AKSignatureDescriptionDelegate> descriptionDelegate;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)clear;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)_displayCustomInputEntryFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)chooseSignatureCaption:(id)a0;
- (void)signatureDescriptionInputViewController:(id)a0 dismissWithCustomDescription:(id)a1;

@end
