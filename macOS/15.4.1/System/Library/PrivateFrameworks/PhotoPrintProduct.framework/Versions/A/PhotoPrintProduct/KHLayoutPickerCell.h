@class UXView, KHLayout, KHTreatment, NSString;

@interface KHLayoutPickerCell : KHPickerCell <KHLayoutThumbnailerDelegate>

@property (retain) UXView *selectionView;
@property (retain, nonatomic) KHLayout *layoutObject;
@property (retain) KHTreatment *treatment;
@property BOOL leftFacing;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } thumbRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (BOOL)accessibilityPerformPress;
- (void)renderImage;
- (void)_renderImage;
- (void)layoutThumbnailerCompletedOnMain:(id)a0;
- (void)thumbnailerCompleted:(id)a0;

@end
