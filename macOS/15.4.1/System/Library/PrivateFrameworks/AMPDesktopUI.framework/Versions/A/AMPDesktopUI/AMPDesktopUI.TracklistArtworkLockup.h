@interface AMPDesktopUI.TracklistArtworkLockup : NSTableCellView <NSOutlineViewDataSource>

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ totalsLineField;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkAspectConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkPinHeightConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ artworkProportionalWidthConstraint;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)lockup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)propertyKeysForViewSpy;

@end
