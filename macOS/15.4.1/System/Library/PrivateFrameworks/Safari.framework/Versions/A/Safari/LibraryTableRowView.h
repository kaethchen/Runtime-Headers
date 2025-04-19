@class NSTrackingArea, LibraryItem, NSLayoutConstraint;

@interface LibraryTableRowView : NSTableRowView {
    NSTrackingArea *_trackingArea;
    NSLayoutConstraint *_trailingConstraint;
    BOOL _hovered;
}

@property (retain, nonatomic) LibraryItem *item;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_commonLibraryTableRowViewInit;
- (id)_libraryTableCellView;
- (BOOL)_needsTrailingMarginForDisclosureButton;
- (void)_updateTrailingConstraint;
- (id)disclosureButton;
- (id)libraryDisclosureButton;

@end
