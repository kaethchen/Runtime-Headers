@class NSString, NSView, CABackdropLayer, CALayer;

@interface NSTouchBarColorListPickerBlurContainerView : NSView <NSTouchBarColorListPickerContainerView> {
    CABackdropLayer *_backdropLayer;
    CALayer *_topCropLayer;
    CALayer *_bottomCropLayer;
    CALayer *_rightCropLayer;
    CALayer *_leftCropLayer;
    CALayer *_underContentCoverView;
}

@property (retain) NSView *contentView;
@property BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
