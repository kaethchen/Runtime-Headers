@class NSImage;

@interface AMPDesktopUI._TwoLineBadgedCell : AMPDesktopUI._TwoLineCell

@property (nonatomic, weak) void /* unknown type, empty encoding */ badge;
@property (nonatomic, readonly) NSImage *badgeImage;

+ (id)keyPathsForValuesAffectingBadgeImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
