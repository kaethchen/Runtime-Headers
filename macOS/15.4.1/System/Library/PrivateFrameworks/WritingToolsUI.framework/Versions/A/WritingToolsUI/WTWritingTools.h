@class WTAffordanceUIController, NSPopover;
@protocol WTWritingToolsPanel;

@interface WTWritingTools : NSObject

@property (retain, nonatomic) NSPopover *popover;
@property (retain, nonatomic) WTAffordanceUIController *affordanceUIController;
@property (retain, nonatomic) id<WTWritingToolsPanel> currentPanel;
@property (readonly, nonatomic) id<WTWritingToolsPanel> activePanel;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)endWritingTools;
- (void)scheduleShowAffordanceForSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 forDelegate:(id)a2;
- (void)showTool:(long long)a0 forSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 forDelegate:(id)a3 smartReplyConfiguration:(id)a4;
- (void)showTool:(id)a0;
- (void)showTool:(long long)a0 forSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 forDelegate:(id)a3;
- (void)showPanelForSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 forDelegate:(id)a2;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 forDelegate:(id)a2;

@end
