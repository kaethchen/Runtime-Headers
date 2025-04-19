@protocol AMPTrackTableItemModel;

@interface AMPDesktopUI._TrackTableActionCell : AMPRolloverTableCell {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ kLeadingPadding;
    void /* unknown type, empty encoding */ kTrailingPadding;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ button;
@property (nonatomic, readonly) id<AMPTrackTableItemModel> viewModel;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic) BOOL rollover;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doActionClicked:(id)a0;

@end
