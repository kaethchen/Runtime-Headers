@class NSString, PDFAnnotation;

@interface PDFAccessibilityNodeAnnotation : PDFAccessibilityNode

@property (weak, nonatomic) PDFAnnotation *annotation;
@property (retain, nonatomic) NSString *labelText;

+ (id)localizationManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)accessibilitySelectedTextRanges;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityHelp;
- (long long)accessibilityInsertionPointLineNumber;
- (id)accessibilityLabel;
- (long long)accessibilityLineForIndex:(long long)a0;
- (BOOL)accessibilityPerformPress;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityRows;
- (id)accessibilitySelectedText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityTitleUIElement;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityFocused;
- (void)setAccessibilityEnabled:(BOOL)a0;
- (void)setAccessibilityFocused:(BOOL)a0;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilityValue:(id)a0;
- (void)setPage:(id)a0;
- (id)_textView;
- (id)_annotationText;
- (id)_annotationSelection;
- (struct CGPDFTaggedNode { } *)_associatedImageNodeRef;
- (id)_control;
- (BOOL)_isPressableWidget;
- (id)_pageView;
- (void)_redirectNotifications:(id)a0;
- (void)interactWithAnnotation:(id)a0;
- (BOOL)isAnnotationType:(id)a0;
- (BOOL)isTextWidget;
- (BOOL)isValidAccessibilityElement;

@end
