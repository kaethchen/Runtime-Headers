@class CAAppleEQGraphView, CAAppleAU_ToolTipWindow;
@protocol CAAUViewParameterDataSource;

@interface CAFilterControl : NSObject {
    CAAppleEQGraphView *view;
    id<CAAUViewParameterDataSource> dataSource;
    BOOL drawVerticalGuide;
    BOOL drawHorizontalGuide;
    BOOL hideTooltip;
    int type;
    int widthParamType;
    CAAppleAU_ToolTipWindow *toolTip;
    struct CGPoint { double x; double y; } knobLocation;
    double widthPixels;
    struct CGPoint { double x; double y; } clickOffset;
}

@property BOOL enabled;
@property BOOL highlighted;
@property BOOL bypassed;
@property unsigned int param1;
@property unsigned int param2;
@property unsigned int param3;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } controlBounds;
@property int type;

+ (long long)compare:(int)a0 to:(int)a1;

- (void)dealloc;
- (void)setType:(int)a0;
- (int)type;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)update;
- (void)setParam:(unsigned int)a0 value:(float)a1;
- (void)handleParameterValueChange:(id)a0;
- (void)hideTooltip:(BOOL)a0;
- (id)initWithView:(id)a0 dataSource:(id)a1 type:(int)a2 param1ID:(unsigned int)a3 param2ID:(unsigned int)a4 param3ID:(unsigned int)a5;
- (BOOL)isToolTipVisible;
- (void)moveControl:(struct CGPoint { double x0; double x1; })a0 part:(int)a1;
- (void)removeTooltip;
- (void)tooltipWillClose:(id)a0;

@end
