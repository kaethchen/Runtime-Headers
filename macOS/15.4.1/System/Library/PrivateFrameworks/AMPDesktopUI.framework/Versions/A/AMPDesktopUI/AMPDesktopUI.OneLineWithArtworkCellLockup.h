@interface AMPDesktopUI.OneLineWithArtworkCellLockup : AMPDesktopUI.OneLineCellLockup {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ kArtworkCornerRadius;
    void /* unknown type, empty encoding */ kArtworkVerticalInset;
    void /* unknown type, empty encoding */ kArtworkLeadingInset;
    void /* unknown type, empty encoding */ kArtworkSize;
    void /* unknown type, empty encoding */ kLabelToArtworkSpacing;
    void /* unknown type, empty encoding */ kLabelTrailingSpacing;
}

@property (nonatomic, copy) id objectValue;

+ (id)keyPathsForValuesAffectingArtImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)artImageForModel:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1;
- (void)startImageLoadingFromModel:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
