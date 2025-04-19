@class NSString;

@interface PXSTextField : NSTextField

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;

+ (id)sharedNumberFormatter;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;

@end
