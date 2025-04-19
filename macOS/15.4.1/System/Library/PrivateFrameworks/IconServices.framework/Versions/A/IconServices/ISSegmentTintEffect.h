@class CIImage, IFColor, NSString;

@interface ISSegmentTintEffect : NSObject <ISEffect>

@property (copy) CIImage *segmentedImage;
@property (retain) IFColor *color;
@property BOOL hasSegmentedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
