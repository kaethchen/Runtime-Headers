@interface NSWindowSectionControllerBoundingDivider : NSTrackingSeparatorToolbarItem

@property double explicitPosition;

+ (id)keyPathsForValuesAffecting_logicalPartitionPosition;
+ (id)keyPathsForValuesAffecting_visualPartitionPosition;

- (double)_logicalPartitionPosition;
- (double)_visualPartitionPosition;
- (double)dividerWidth;

@end
