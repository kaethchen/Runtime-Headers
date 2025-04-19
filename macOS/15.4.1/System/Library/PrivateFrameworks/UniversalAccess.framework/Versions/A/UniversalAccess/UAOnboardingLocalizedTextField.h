@class NSString, NSColor;

@interface UAOnboardingLocalizedTextField : NSTextField

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (retain, nonatomic) NSColor *color;
@property (nonatomic) long long fontSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 color:(id)a2 fontSize:(long long)a3;
- (void)setTextMaxWidth:(double)a0 lineBreakMode:(unsigned long long)a1;

@end
