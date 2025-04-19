@class PXTitleSubtitleLabelSpec, NSArray, PXViewSpec, NSString, NSPointerArray, NSObject;
@protocol PXAnonymousView, PXRegionOfInterestImage;

@interface PXRegionOfInterest : PXDisplayRect {
    NSPointerArray *_scrollViews;
}

@property (copy, nonatomic) NSArray *containingScrollViews;
@property (retain, nonatomic) id<PXRegionOfInterestImage> imageRequester;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageContentsRect;
@property (retain, nonatomic) PXViewSpec *imageViewSpec;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *textViewSpec;
@property (copy, nonatomic) id /* block */ placeholderViewFactory;
@property (copy, nonatomic) id /* block */ trackingContainerViewFactory;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *trackingContainerView;
@property (nonatomic) BOOL isRepresentingPlaceholderContent;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertedImageContentsRectOfRegionOfInterest:(id)a0 toCoordinateSpace:(id)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 flipped:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)copyWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (void)_copyPropertiesTo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })uncroppedImageFrameInCoordinateSpace:(id)a0;

@end
