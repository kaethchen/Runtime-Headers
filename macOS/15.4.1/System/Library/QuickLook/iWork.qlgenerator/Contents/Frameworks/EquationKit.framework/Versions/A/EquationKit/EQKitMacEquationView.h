@class NSColor, NSSplitView, NSString;
@protocol EQKitLayout;

@interface EQKitMacEquationView : NSView <NSSplitViewDelegate>

@property (nonatomic) double viewScale;
@property (nonatomic) double padding;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property NSSplitView *splitView;
@property (retain, nonatomic) id<EQKitLayout> equationLayout;
@property (copy, nonatomic) NSColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)splitViewDidResizeSubviews:(id)a0;
- (void)pUpdateFrame;

@end
