@class NSTextField, NSAttributedString, NSString, NSProgressIndicator, NSTextView, NSStackView, NSLayoutConstraint;

@interface MOPhotosSupplementaryFooter : MOMediaViewSupplementary <NSTextViewDelegate>

@property (retain, nonatomic) NSStackView *centeringStackView;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSTextField *referencedMediaInformationTextField;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSTextView *subtitleTextView;
@property (retain, nonatomic) NSTextField *messageTextField;
@property (retain, nonatomic) NSTextView *informationTextView;
@property (retain, nonatomic) NSLayoutConstraint *informationTextViewHeightConstraint;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *referencedMediaInformation;
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (retain, nonatomic) NSAttributedString *message;
@property (retain, nonatomic) NSAttributedString *information;
@property (nonatomic) BOOL highlightInformation;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) double progress;
@property (nonatomic) BOOL progressDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)footerHeight;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_performAction:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (id)_newTextField;
- (BOOL)_isAttributedStringA:(id)a0 equalToAttributedStringB:(id)a1;
- (id)_newCenteringStackView;
- (id)_newInformationTextView;
- (id)_newProgressIndicator;
- (id)_newSubtitleTextView;
- (void)_updateTextViewConfiguration:(id)a0 highlighted:(BOOL)a1;
- (void)setFooterInfo:(id)a0;

@end
