@interface HUDCollectionView : NSCollectionView

- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)scrollWheel:(id)a0;

@end
