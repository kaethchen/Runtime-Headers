@interface WFIconHostingView : NSView {
    void /* unknown type, empty encoding */ hostingView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ icon;
@property (nonatomic) void /* unknown type, empty encoding */ iconSize;
@property (nonatomic) void /* unknown type, empty encoding */ useAccentColor;

+ (id)renderIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
