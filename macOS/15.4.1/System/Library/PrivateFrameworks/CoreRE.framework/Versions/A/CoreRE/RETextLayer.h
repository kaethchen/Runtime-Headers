@interface RETextLayer : CALayer

@property (nonatomic) struct __CFAttributedString { } *attributedString;
@property (nonatomic) struct EdgeInsets { float top; float left; float bottom; float right; } edgeInsets;
@property (copy, nonatomic) id /* block */ renderBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
