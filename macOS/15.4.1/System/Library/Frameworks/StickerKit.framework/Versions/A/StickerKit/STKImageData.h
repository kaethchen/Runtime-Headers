@class NSImage, NSData, NSURL, UTType;

@interface STKImageData : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) struct CGImageSource { } *imageSource;
@property (nonatomic) unsigned long long count;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGSize { double width; double height; } pxSize;
@property (nonatomic) BOOL initializedProperties;
@property (readonly, nonatomic) BOOL supportsAnimatedImages;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } ptSize;
@property (readonly, copy, nonatomic) UTType *utType;
@property (readonly, nonatomic) BOOL containsMultipleFrames;

+ (id)UTITypeForData:(id)a0;
+ (BOOL)supportsASTC;
+ (id)UTTypeForData:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithURL:(id)a0;
- (id)MIMEType;
- (void)_initializeProperties;
- (id)UTIType;
- (id)_defaultDurationsWithMaxCount:(unsigned long long)a0;
- (id)_thumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)_thumbnailFitToSize:(struct CGSize { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (id)durationsWithMaxCount:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForImageSource:(struct CGImageSource { } *)a0 index:(unsigned long long)a1;
- (id)thumbnailAtIndex:(unsigned long long)a0 fillToSize:(struct CGSize { double x0; double x1; })a1 maxCount:(unsigned long long)a2;
- (id)thumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailFillToSizeCropping:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailFitToSize:(struct CGSize { double x0; double x1; })a0;
- (id)thumbnailsFillToSize:(struct CGSize { double x0; double x1; })a0 maxCount:(unsigned long long)a1;
- (id)thumbnailsFitToSize:(struct CGSize { double x0; double x1; })a0 maxCount:(unsigned long long)a1;
- (BOOL)typeSupportsAnimatedImages;

@end
