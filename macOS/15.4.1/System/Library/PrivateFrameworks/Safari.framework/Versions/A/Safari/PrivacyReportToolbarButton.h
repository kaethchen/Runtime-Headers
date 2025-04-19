@interface PrivacyReportToolbarButton : ToolbarButtonPlus

@property (nonatomic) unsigned long long browsingMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverAnchorRect;

+ (void)initialize;

- (id)menuForEvent:(id)a0;

@end
