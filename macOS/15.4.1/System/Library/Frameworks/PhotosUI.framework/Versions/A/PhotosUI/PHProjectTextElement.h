@class NSString, NSAttributedString;

@interface PHProjectTextElement : PHProjectElement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly) long long textElementType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(BOOL)a0;
- (id)initWithAttributedText:(id)a0 type:(long long)a1 weight:(id)a2 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithText:(id)a0 attributedText:(id)a1 type:(long long)a2 weight:(id)a3 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithText:(id)a0 textAttributes:(id)a1 type:(long long)a2 weight:(id)a3 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithText:(id)a0 type:(long long)a1 weight:(id)a2 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
