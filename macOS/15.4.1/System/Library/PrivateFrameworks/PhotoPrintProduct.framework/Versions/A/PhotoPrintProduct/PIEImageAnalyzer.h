@class NSString;

@interface PIEImageAnalyzer : NSObject

@property (readonly) struct CGImage { } *image;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned long long imageHeight;
@property (readonly) NSString *photoID;

- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0;
- (id)determinePredominantColorsWithRegions;
- (id)initWithImage:(struct CGImage { } *)a0 photoID:(id)a1;

@end
