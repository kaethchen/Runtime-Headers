@interface MOPhotosLayoutInvalidationContext : UXCollectionViewLayoutInvalidationContext

@property BOOL settingsChanged;

- (BOOL)invalidateEverything;

@end
