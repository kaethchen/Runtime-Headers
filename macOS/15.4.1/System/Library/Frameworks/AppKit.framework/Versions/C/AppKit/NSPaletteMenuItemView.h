@interface NSPaletteMenuItemView : NSView <NSMenuItemViewProtocol> {
    void /* unknown type, empty encoding */ borderLayer;
    void /* unknown type, empty encoding */ gapWidth;
    void /* unknown type, empty encoding */ outlineWidth;
    void /* unknown type, empty encoding */ _isHighlighted;
    void /* unknown type, empty encoding */ hasCircleLayers;
    void /* unknown type, empty encoding */ hasOutlineLayers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectionBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_outlineView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_normalSymbolConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlaySymbolConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_symbolPath;
}

@property (nonatomic, readonly) BOOL canBeHighlighted;
@property (nonatomic, readonly) BOOL wantsSelectionMaterial;
@property (nonatomic, weak) void /* unknown type, empty encoding */ menuItem;
@property (nonatomic) void /* unknown type, empty encoding */ isHighlighted;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithItem:(id)a0;

@end
