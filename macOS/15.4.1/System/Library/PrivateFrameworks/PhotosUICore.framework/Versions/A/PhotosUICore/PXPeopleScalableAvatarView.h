@class UXImageView, PHFace, CALayer;
@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    CALayer *_imageLayer;
}

@property (nonatomic) double imageViewCornerRadius;
@property (retain) UXImageView *imageView;
@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) PHFace *face;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) BOOL useLowMemoryMode;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateImage;
- (void)_updateImageAndWait:(BOOL)a0;
- (void)setPersonAndWaitForImage:(id)a0;
- (void)viewScaleDidChange;

@end
