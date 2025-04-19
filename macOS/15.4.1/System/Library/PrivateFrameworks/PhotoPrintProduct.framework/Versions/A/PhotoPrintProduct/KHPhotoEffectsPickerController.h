@class KHFrame, NSArray, UXCollectionViewFlowLayout, UXCollectionView, NSString, NSObject, KHImage;
@protocol OS_dispatch_queue;

@interface KHPhotoEffectsPickerController : UXViewController <KHPickerCellDelegate, UXCollectionViewDataSource, UXCollectionViewDelegate>

@property (readonly) KHImage *squareImage;
@property (readonly) NSArray *effects;
@property (readonly) NSObject<OS_dispatch_queue> *effectsQueue;
@property (retain, nonatomic) KHFrame *frame;
@property (retain) UXCollectionView *collectionView;
@property (retain) UXCollectionViewFlowLayout *flowLayout;
@property struct CGSize { double width; double height; } padding;
@property struct CGSize { double width; double height; } cellSize;
@property BOOL showsArrows;
@property unsigned long long visibleRows;
@property BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)imageForEffectIndex:(unsigned long long)a0;
- (void)syncCollectionViewSelection;

@end
