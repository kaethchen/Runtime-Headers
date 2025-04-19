@class NSString;

@interface PDFAccessibilityNodeContent : PDFAccessibilityNode

@property (copy, nonatomic) NSString *_stringValue;
@property struct _NSRange { unsigned long long location; unsigned long long length; } _textRange;
@property BOOL isRangeCalculated;

- (id)description;
- (void).cxx_destruct;
- (id)stringValue;
- (id)initWithParent:(id)a0;
- (long long)accessibilityNumberOfCharacters;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityRole;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (struct CGPDFTaggedNode { } *)nodeRef;

@end
