@class OKWidgetTextViewNSTextView, NSString, NSScrollView, NSAttributedString, NSColor;

@interface OKWidgetTextView : OKWidgetTextViewProxy <NSTextViewDelegate> {
    NSScrollView *_scrollView;
    OKWidgetTextViewNSTextView *_textView;
    BOOL _scrollEnabled;
    BOOL _highlighted;
    BOOL _usingAttributedText;
    NSAttributedString *_originalText;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _settingBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _settingFrame;
    double _highlightBorderWidth;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) NSColor *strokeColor;
@property (retain, nonatomic) NSColor *textBackgroundColor;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL isUppercase;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) long long textVerticalAlignment;
@property (nonatomic) long long textGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)textDidBeginEditing:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (BOOL)textShouldBeginEditing:(id)a0;
- (void)textViewDidChangeTypingAttributes:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textViewFrame;
- (void)_layoutViews;
- (id)initWithWidget:(id)a0;
- (void)setSettingText:(id)a0;
- (BOOL)settingEditable;
- (float)settingFontSize;
- (id)settingFontName;
- (void)_applyTextSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfText:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)_composeColor:(id)a0 withDestinationColor:(id)a1;
- (void)_setupScrolledViews;
- (void)_updateSettingsFromAttributes:(id)a0 andText:(id)a1;
- (id)layoutSettingsKeys;
- (void)setSettingAttributedText:(id)a0;
- (void)setSettingBorderWidth:(double)a0;
- (void)setSettingEditable:(BOOL)a0;
- (void)setSettingFontName:(id)a0;
- (void)setSettingFontSize:(float)a0;
- (void)setSettingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingScrollEnabled:(BOOL)a0;
- (void)setSettingStrokeColor:(id)a0;
- (void)setSettingStrokeWidth:(float)a0;
- (void)setSettingTextAlignment:(long long)a0;
- (void)setSettingTextBackgroundColor:(id)a0;
- (void)setSettingTextColor:(id)a0;
- (void)setSettingTextVerticalAlignment:(long long)a0;
- (void)setSettingUppercase:(BOOL)a0;
- (id)settingAttributedText;
- (BOOL)settingScrollEnabled;
- (id)settingStrokeColor;
- (double)settingStrokeWidth;
- (id)settingText;
- (long long)settingTextAlignment;
- (id)settingTextBackgroundColor;
- (id)settingTextColor;
- (long long)settingTextVerticalAlignment;
- (BOOL)settingUppercase;

@end
