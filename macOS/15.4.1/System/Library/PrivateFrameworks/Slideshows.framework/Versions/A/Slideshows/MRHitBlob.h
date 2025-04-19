@class MRLayer, NSString, MRLayerEffect;
@protocol MRSlidePositionSupport;

@interface MRHitBlob : NSObject

@property (retain) MRLayer *outerLayer;
@property (retain) MRLayerEffect *effectLayer;
@property (copy) NSString *innerPath;
@property (copy) NSString *elementID;
@property (retain) id clientObject;
@property (readonly) NSString *mediaType;
@property (readonly) double aspectRatio;
@property (readonly) struct CGSize { double x0; double x1; } innerResolution;
@property id<MRSlidePositionSupport> proxyForSlide;
@property (nonatomic) unsigned char currentLayoutIndex;

- (BOOL)isEqualToHitBlob:(id)a0;

@end
