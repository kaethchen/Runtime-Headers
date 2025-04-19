@class NSImageView, NSTextField;

@interface AKTrustedDeviceViewItem : NSCollectionViewItem

@property (nonatomic) NSTextField *mainTextField;
@property (nonatomic) NSTextField *subTextField;
@property (nonatomic) NSImageView *mainImageView;
@property (nonatomic) BOOL hideSelectedState;
@property (readonly, nonatomic) BOOL shouldDrawSelected;

+ (id)keyPathsForValuesAffectingShouldDrawSelected;

- (void)awakeFromNib;

@end
