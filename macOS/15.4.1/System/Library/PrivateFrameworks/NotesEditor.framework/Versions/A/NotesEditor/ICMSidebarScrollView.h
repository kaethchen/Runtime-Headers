@interface ICMSidebarScrollView : NSScrollView {
    void /* unknown type, empty encoding */ sidebarController;
}

@property (class, nonatomic, readonly) BOOL compatibleWithResponsiveScrolling;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;

@end
