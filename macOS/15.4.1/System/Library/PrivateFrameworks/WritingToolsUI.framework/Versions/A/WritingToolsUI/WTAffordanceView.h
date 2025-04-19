@interface WTAffordanceView : NSView

@property (copy, nonatomic) id /* block */ callback;

+ (id)fillColor;
+ (id)symbolColor:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClick:(id)a0;
- (void)setOnClickCallback:(id /* block */)a0;

@end
