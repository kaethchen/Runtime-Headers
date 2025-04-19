@class NSString, NSButton, FI_TIconCollectionGroupHeaderView;

@interface FIIconHeaderView : NSView <NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate> {
    FI_TIconCollectionGroupHeaderView *_headerView;
}

@property (copy) NSString *titleStr;
@property unsigned long long itemCount;
@property (getter=isCollapsed) BOOL collapsed;
@property (getter=isCollapseButtonHidden) BOOL collapseButtonHidden;
@property (getter=isCollapseButtonHiddenManually) BOOL collapseButtonHiddenManually;
@property (getter=isFloating) BOOL floating;
@property (weak) NSButton *sectionCollapseButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)initCommon;
- (void)setCollapseButtonPressedBlock:(id /* block */)a0;

@end
