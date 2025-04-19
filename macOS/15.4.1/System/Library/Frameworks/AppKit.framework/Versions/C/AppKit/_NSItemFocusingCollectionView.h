@interface _NSItemFocusingCollectionView : NSCollectionView

@property BOOL isActiveFirstResponder;

- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;

@end
