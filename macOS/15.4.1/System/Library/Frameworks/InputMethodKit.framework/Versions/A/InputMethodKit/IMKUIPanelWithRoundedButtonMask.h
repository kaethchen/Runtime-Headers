@interface IMKUIPanelWithRoundedButtonMask : IMKUIPanelMask

@property (nonatomic) long long alignment;
@property (nonatomic) double buttonRadius;
@property (nonatomic) double cornerRadius;

+ (id)maskWithSize:(struct CGSize { double x0; double x1; })a0 buttonRadius:(double)a1 cornerRadius:(double)a2 alignment:(long long)a3;

- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
