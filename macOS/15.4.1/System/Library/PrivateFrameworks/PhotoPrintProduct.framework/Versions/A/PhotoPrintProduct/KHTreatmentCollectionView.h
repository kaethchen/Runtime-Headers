@class NSTrackingArea;
@protocol KHTreatmentCollectionDelegate;

@interface KHTreatmentCollectionView : UXCollectionView

@property (weak, nonatomic) id<KHTreatmentCollectionDelegate> delegate;
@property (retain) NSTrackingArea *trackingArea;

- (void).cxx_destruct;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;

@end
