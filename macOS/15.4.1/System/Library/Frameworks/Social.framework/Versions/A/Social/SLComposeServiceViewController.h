@class NSPopUpButton, NSButton, NSProgressIndicator, NSLayoutConstraint, NSString, NSImage, SLXShareWindowBackgroundView, SHKShareImageView, NSTextView, NSView, SLXShareLocationController, NSTextField, NSNumber;

@interface SLComposeServiceViewController : NSViewController <NSTextViewDelegate> {
    SLXShareWindowBackgroundView *_backgroundView;
    NSTextField *_characterCountTextField;
    NSView *_locationContainerView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_titleTextField;
    NSTextField *_errorTextField;
    NSTextField *_accountsFromTextField;
    NSTextField *_audienceTextField;
    SHKShareImageView *_imageView;
    NSLayoutConstraint *_constraintBetweenImageAndPopUp;
    NSLayoutConstraint *_constraintForAccountsPopUpWidth;
    NSLayoutConstraint *_constraintForAudiencePopUpWidth;
    NSLayoutConstraint *_constraintForImagePreviewWidth;
    double _minWindowHeight;
    double _baseWindowHeight;
}

@property (readonly) NSButton *cancelButton;
@property (readonly) NSButton *sendButton;
@property (retain) NSString *message;
@property BOOL showsProgressIndicator;
@property BOOL showsAccountsPopUp;
@property BOOL showsAudiencePopUp;
@property BOOL showsRemainingCharactersCounter;
@property BOOL showsLocationPin;
@property BOOL showsCompletionPopUpInMessage;
@property (readonly) NSTextView *messageTextView;
@property (readonly) NSPopUpButton *accountsPopUpButton;
@property (readonly) NSPopUpButton *audiencePopUpButton;
@property (readonly) SLXShareLocationController *locationController;
@property (readonly, retain) id selectedAccount;
@property int textureStyle;
@property (readonly) NSImage *image;
@property (readonly) NSImage *decoratedImage;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageContentFrame;
@property BOOL timedOutComputingThumbnail;
@property unsigned long long mainItemIndex;
@property (readonly) NSTextView *textView;
@property (readonly) NSString *contentText;
@property (copy) NSString *placeholder;
@property (retain) NSNumber *charactersRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingImage;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibName;
- (id)imageView;
- (void)loadView;
- (id)nibBundle;
- (id)previewImage;
- (void)setPreviewImage:(id)a0;
- (id)textView:(id)a0 willShowSharingServicePicker:(id)a1 forItems:(id)a2;
- (void)textViewDidChangeSelection:(id)a0;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)adjustTextFrame;
- (void)didSelectCancel;
- (id)placeholderText;
- (void)validateContent;
- (unsigned long long)_alertCharacterThreshold;
- (BOOL)_areAttachmentsReady;
- (BOOL)_canSendMediaWithNoText;
- (void)_cancel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame;
- (void)_makeUIBusy:(BOOL)a0 showsProgressIndicator:(BOOL)a1;
- (void)_messageTextViewDidScroll:(id)a0;
- (void)_send:(id)a0;
- (void)_setupUIWithInputItems;
- (void)_updateCharactersCountField;
- (void)_updateSpaceBetweenImageAndPopUp;
- (void)_validateSendButton;
- (void)_validateUI;
- (void)accountsPopUpChanged:(id)a0;
- (void)activateFirstResponder;
- (void)adjustAccountsPopUpFrame;
- (void)adjustAudiencePopUpFrame;
- (void)audiencePopUpChanged:(id)a0;
- (void)contentDidChange;
- (void)didSelectPost;
- (void)displayErrorString:(id)a0;
- (id)displayNameForLocation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageContentFrameForItemProvider:(id)a0;
- (id)imageForItemProvider:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForItemProvider:(id)a0;
- (BOOL)isContentValid;
- (BOOL)isPreviewImageVisible;
- (id)locationController:(id)a0 displayNameForLocation:(id)a1;
- (id)mainItem;
- (void)presentationAnimationDidFinish;
- (id)previewImageLayer;
- (void)setPlaceholderText:(id)a0;
- (void)setPreviewImageVisible:(BOOL)a0;
- (BOOL)supportsLocation;
- (BOOL)wantsPaperclip;

@end
