@class CIImage, NSString;

@interface ISSegmentDarkEffect : NSObject <ISEffect>

@property (copy) CIImage *segmentedImage;
@property BOOL hasSegmentedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
