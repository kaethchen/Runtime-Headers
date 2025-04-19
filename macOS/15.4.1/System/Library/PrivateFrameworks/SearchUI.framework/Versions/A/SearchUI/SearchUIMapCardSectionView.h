@class TLKStackView, NSClickGestureRecognizer, NSString, MKMapSnapshotter, CLPlacemark, MKPinAnnotationView, TLKImageView, TLKLabel, SFMapCardSection;

@interface SearchUIMapCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>

@property (readonly, nonatomic) SFMapCardSection *section;
@property (retain, nonatomic) TLKLabel *footnoteDescriptorLabel;
@property (retain, nonatomic) TLKLabel *footnoteLabel;
@property (retain, nonatomic) MKPinAnnotationView *pinAnnotationView;
@property (retain, nonatomic) NSClickGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) CLPlacemark *currentPlacemark;
@property (retain, nonatomic) TLKStackView *labelsStackView;
@property (retain, nonatomic) TLKImageView *snapshotView;
@property (retain, nonatomic) MKMapSnapshotter *mapSnapshotter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_postalAddressFromPlacemark:(id)a0;
+ (BOOL)fillsBackgroundWithContentForRowModel:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)setupContentView;
- (void)_updateSnapshot;
- (id)_clLocationFromSFLatLng:(id)a0;
- (void)_mapButtonPressed;
- (void)_updateSnapshotWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)requestedMapHeight;
- (void)sendMapFeedbackWithTriggerEvent:(unsigned long long)a0 placemarkData:(id)a1;
- (void)updateWithRowModel:(id)a0;

@end
