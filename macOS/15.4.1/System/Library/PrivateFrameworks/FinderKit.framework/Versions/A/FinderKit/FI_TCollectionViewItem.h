@class NSView, NSString;
@protocol TCollectionViewItemViewProtocol;

@interface FI_TCollectionViewItem : NSCollectionViewItem <TMarkTornDown>

@property (retain) NSView<TCollectionViewItemViewProtocol> *view;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (BOOL)_viewControllerSupports10_10Features;
- (void)aboutToTearDown;
- (struct TFENode { struct OpaqueNodeRef *x0; })node;
- (id)viewNoLoad;
- (void)setUseActiveAppearance:(BOOL)a0;

@end
