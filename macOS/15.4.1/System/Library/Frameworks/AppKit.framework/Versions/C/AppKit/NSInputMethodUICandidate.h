@class NSString, NSInputMethodUICandidateItemLayout, NSAttributedString, NSTouchBarInputMethodCandidate;

@interface NSInputMethodUICandidate : NSObject <NSCopying>

@property (nonatomic) long long annotationType;
@property (retain, nonatomic) NSTouchBarInputMethodCandidate *candidate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, nonatomic) double maximumPadding;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) NSString *stringIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (copy, nonatomic) NSAttributedString *annotationAttributedStringValue;
@property (copy, nonatomic) NSAttributedString *titleAttributedStringValue;
@property (retain, nonatomic) NSInputMethodUICandidateItemLayout *layout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)titleAttributes;
- (id)attributedStringWithString:(id)a0 attributes:(id)a1 selected:(BOOL)a2;
- (id)stringAttributes:(id)a0 selected:(BOOL)a1;

@end
