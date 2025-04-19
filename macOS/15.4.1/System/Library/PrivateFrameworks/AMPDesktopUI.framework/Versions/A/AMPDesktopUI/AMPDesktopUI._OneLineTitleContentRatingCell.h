@class NSAttributedString;

@interface AMPDesktopUI._OneLineTitleContentRatingCell : NSTableCellView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_boldFont;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic, readonly) NSAttributedString *attributedTitle;

+ (id)keyPathsForValuesAffectingAttributedTitle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
