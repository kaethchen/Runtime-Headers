@class AKSignature;

@interface AKSignatureOutputView_Mac : NSView

@property BOOL showsOutput;
@property (copy, nonatomic) AKSignature *signature;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showsOutput:(BOOL)a0;

@end
