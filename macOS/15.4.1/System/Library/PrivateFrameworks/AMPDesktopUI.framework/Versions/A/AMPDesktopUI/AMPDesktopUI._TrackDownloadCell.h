@protocol AMPTrackTableItemModel;

@interface AMPDesktopUI._TrackDownloadCell : AMPRolloverTableCell

@property (nonatomic, weak) void /* unknown type, empty encoding */ downloadButton;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) id<AMPTrackTableItemModel> viewModel;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) double downloadProgress;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)propertyKeysForViewSpy;
- (void)reflectDownloadBtn:(id)a0;

@end
