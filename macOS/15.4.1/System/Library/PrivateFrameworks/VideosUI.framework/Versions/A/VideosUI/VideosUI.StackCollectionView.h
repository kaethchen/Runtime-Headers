@interface VideosUI.StackCollectionView : VideosUI.BaseCollectionView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_registeredCells;
    void /* unknown type, empty encoding */ registeredSupplementaries;
    void /* unknown type, empty encoding */ hideScrollBar;
    void /* unknown type, empty encoding */ chevronIndicatorHost;
    void /* unknown type, empty encoding */ lastMouseOverSection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)pageUp:(id)a0;
- (void)scrollPageDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)moveDown:(id)a0;
- (void)pageDown:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (id)visibleItems;
- (void)preferredScrollerStyleDidChange;
- (void)sectionScrollViewDidScrollWithNotification:(id)a0;
- (void)vui_registerClass:(Class)a0 forCellWithReuseIdentifier:(id)a1;
- (void)vui_registerClass:(Class)a0 forSupplementaryViewOfKind:(id)a1 withReuseIdentifier:(id)a2;

@end
