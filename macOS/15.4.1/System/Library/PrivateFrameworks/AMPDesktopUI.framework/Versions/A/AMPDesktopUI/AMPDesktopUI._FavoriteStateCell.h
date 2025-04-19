@class NSImage;

@interface AMPDesktopUI._FavoriteStateCell : AMPRolloverTableCell

@property (nonatomic, weak) void /* unknown type, empty encoding */ button;
@property (nonatomic, readonly) NSImage *favoriteImage;
@property (nonatomic, readonly) BOOL favoriteEnabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;
@property (nonatomic) long long backgroundStyle;

+ (id)keyPathsForValuesAffectingFavoriteEnabled;
+ (id)keyPathsForValuesAffectingFavoriteImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)reflectAction:(id)a0;

@end
