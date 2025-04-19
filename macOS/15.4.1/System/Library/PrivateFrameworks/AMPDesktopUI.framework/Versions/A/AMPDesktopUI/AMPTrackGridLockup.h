@class NSTextField, NSString, NSScrollView, NSProgressIndicator, TrackGridDiffableDataSource, NSCollectionView;
@protocol AMPTrackGridLockupModel;

@interface AMPTrackGridLockup : NSTableCellView <NSScrollViewDelegate, NSAccessibilityGroup>

@property (class, readonly, copy) NSString *separatorKind;

@property (retain, nonatomic) NSTextField *titleField;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (retain, nonatomic) NSScrollView *scroller;
@property (retain, nonatomic) NSCollectionView *collectionView;
@property (retain, nonatomic) TrackGridDiffableDataSource *dataSource;
@property (retain, nonatomic) id<AMPTrackGridLockupModel> viewModel;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lockup;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)startObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityLabel;
- (void)awakeFromNib;
- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)doRefreshReflection:(id)a0;
- (id)findModelForIdentifier:(id)a0;
- (void)rebuildDataSource:(BOOL)a0;

@end
