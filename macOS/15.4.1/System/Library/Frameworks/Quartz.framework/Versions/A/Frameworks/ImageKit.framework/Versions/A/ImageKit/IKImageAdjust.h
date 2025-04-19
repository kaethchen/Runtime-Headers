@class NSArray, IKImageAdjustView;

@interface IKImageAdjust : NSObject {
    IKImageAdjustView *_ikImageAdjustView;
}

@property (retain) NSArray *ikImageAdjustViewTLO;

- (id)imageAdjustView;

@end
