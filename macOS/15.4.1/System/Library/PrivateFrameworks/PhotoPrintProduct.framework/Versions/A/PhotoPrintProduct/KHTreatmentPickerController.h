@class KHTreatmentCollectionView, NSString, NSArray, CALayer, KHModel, NSMutableArray, KHFrame, NSLayoutConstraint, NSButton, UXCollectionViewFlowLayout;
@protocol KHTreatmentPickerDelegate;

@interface KHTreatmentPickerController : UXViewController <KHPickerCellDelegate, KHTreatmentCollectionDelegate, KHInspectorPanelProtocol, UXCollectionViewDataSource, UXCollectionViewDelegate>

@property (retain) NSMutableArray *treatmentCache;
@property (retain) NSButton *toggleButton;
@property (retain) NSLayoutConstraint *collectionTopCnst;
@property (retain) NSLayoutConstraint *collectionHeightCnst;
@property (retain) NSLayoutConstraint *collectionHeightBorderCnst;
@property (retain) NSLayoutConstraint *toggleButtonTopCnst;
@property (retain) NSLayoutConstraint *toggleButtonHeightCnst;
@property (retain) NSLayoutConstraint *toggleButtonBottomCnst;
@property (retain) NSLayoutConstraint *collectionBottomCnst;
@property (retain) CALayer *tooltipLayer;
@property unsigned long long selectionIndex;
@property BOOL ignoreSelection;
@property BOOL treatmentsClosed;
@property BOOL animating;
@property (weak) id<KHTreatmentPickerDelegate> delegate;
@property (retain, nonatomic) KHModel *bindableModel;
@property (readonly) KHFrame *frame;
@property (retain) NSArray *layouts;
@property (retain) KHTreatmentCollectionView *collectionView;
@property (retain) UXCollectionViewFlowLayout *flowLayout;
@property BOOL animates;
@property long long type;
@property struct CGSize { double width; double height; } padding;
@property struct CGSize { double width; double height; } cellSize;
@property unsigned long long visibleRows;
@property (nonatomic) BOOL showsArrows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)badgeImage;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)mouseDidEnterView:(id)a0;
- (void)mouseDidExitView:(id)a0;
- (void)_hidePhotoBackgroundIfNeeded;
- (void)_restoreExpandedState;
- (unsigned long long)_selectedRow;
- (void)_setNonSelectedRowsHidden:(BOOL)a0;
- (void)_setupCollectionHeightConstraint;
- (void)_toggleTreatments;
- (id)imageForTreatment:(id)a0 backgroundTreatment:(id)a1 ofType:(unsigned long long)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1 treatmentType:(long long)a2;
- (void)mouseDidExitCollectionView:(id)a0;
- (Class)representedClass;
- (void)setupModelBindings;
- (void)setupVerticalConstraints;
- (id)supportedTreatments:(BOOL)a0;
- (void)syncCollectionViewSelection;
- (void)teardownBindings;
- (id)viewForPresentationMode:(int)a0;

@end
