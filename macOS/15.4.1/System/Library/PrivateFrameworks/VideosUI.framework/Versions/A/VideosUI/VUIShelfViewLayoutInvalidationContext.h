@class NSIndexPath;

@interface VUIShelfViewLayoutInvalidationContext : NSCollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateLayout;
@property (nonatomic) BOOL invalidateVerticalBumps;
@property (retain, nonatomic) NSIndexPath *focusedItemIndexPath;

- (void).cxx_destruct;

@end
