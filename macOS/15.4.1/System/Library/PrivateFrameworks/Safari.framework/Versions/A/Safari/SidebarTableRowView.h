@class NSVisualEffectView;

@interface SidebarTableRowView : NSTableRowView {
    NSVisualEffectView *_selectionBackgroundView;
}

@property (nonatomic) BOOL shouldDrawSelectionOnlyWhenEmphasized;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void).cxx_destruct;
- (void)_updateSelectedBackgroundView;
- (long long)interiorBackgroundStyle;
- (void)setEmphasized:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)_shouldDrawSelectionBackground;

@end
