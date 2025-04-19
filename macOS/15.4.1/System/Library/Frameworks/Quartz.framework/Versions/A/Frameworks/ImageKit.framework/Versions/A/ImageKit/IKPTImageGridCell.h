@interface IKPTImageGridCell : IKImageBrowserCell

- (void)draw;
- (BOOL)isSelectable;
- (void)drawOverlays;
- (void)drawSelection;

@end
