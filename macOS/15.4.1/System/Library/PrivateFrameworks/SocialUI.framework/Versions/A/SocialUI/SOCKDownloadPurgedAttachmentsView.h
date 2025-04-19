@class NSTextField, NSView, NSLayoutConstraint, NSButton, NSStackView;

@interface SOCKDownloadPurgedAttachmentsView : NSView

@property (retain, nonatomic) NSTextField *downloadDescriptionTextField;
@property (retain, nonatomic) NSButton *downloadButton;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) BOOL didScheduleTextUpdate;
@property (nonatomic) unsigned long long buttonState;
@property (nonatomic) BOOL iCloudLogoHidden;
@property (nonatomic) unsigned long long countOfAttachments;
@property (copy, nonatomic) id /* block */ downloadButtonPressedCallback;

- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (void)_updateUI;
- (void)_setupImageView;
- (void)_setupStackView;
- (void)_setupTextFields;
- (void)_updateButtonText;
- (void)_updateDescriptionText;
- (void)_updateStackViewConstraint;
- (id)initWithButtonState:(unsigned long long)a0;
- (void)initiateDownload:(id)a0;

@end
