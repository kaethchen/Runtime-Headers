@class NSUICollectionViewController;

@interface NSUICollectionViewControllerWrapperView : NSView

@property (nonatomic) NSUICollectionViewController *collectionViewController;

- (void)didMoveToSuperview;
- (id)_viewControllerToNotifyOnLayoutSubviews;

@end
