@class NSView;

@interface FloatingHeaderSupportingCollectionView : NSCollectionView

@property (retain, nonatomic) NSView *floatingHeaderView;

- (void).cxx_destruct;
- (BOOL)_wantsHeaderView;
- (id)headerView;

@end
