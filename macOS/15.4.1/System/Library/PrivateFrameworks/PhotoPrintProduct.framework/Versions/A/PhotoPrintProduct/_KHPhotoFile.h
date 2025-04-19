@class KHImageProperties, NSURL, NSDictionary;

@interface _KHPhotoFile : KHPhoto

@property (retain, nonatomic) KHImageProperties *imageProperties;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSDictionary *fileAttributes;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithFileURL:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)pageLayoutTitle;
- (id)pageLayoutPhotoModificationDate;
- (id)pageLayoutFilename;
- (BOOL)pageLayoutImageExists;
- (id)pageLayoutImageSuitableForSize:(struct CGSize { double x0; double x1; })a0 quality:(unsigned long long)a1;
- (id)pageLayoutPhotoDate;
- (id)pageLayoutPhotoID;

@end
