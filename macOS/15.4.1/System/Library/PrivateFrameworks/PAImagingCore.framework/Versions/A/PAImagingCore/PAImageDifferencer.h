@class NSDictionary;

@interface PAImageDifferencer : NSObject {
    struct CGImage { } *_image1;
    struct CGImage { } *_image2;
    struct CGImage { } *_diffImage;
    NSDictionary *_differenceDictionary;
}

+ (id)imageDifferencerWithImagePath1:(id)a0 imagePath2:(id)a1;
+ (id)imageDifferencerWithImageURL1:(id)a0 imageURL2:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGImage { } *)differenceImage;
- (long long)differenceCount;
- (void)_calculateDifference:(long long)a0;
- (struct CGImage { } *)_newImageFromPath:(id)a0;
- (struct CGImage { } *)_newImageFromURL:(id)a0;
- (id)differenceDictionary;
- (id)differenceFailure;
- (double)differenceMaxDeltaE;
- (id)differencePercentageOfPixelsExceedingDeltaE;
- (id)differencePercentageOfPixelsWithAnyDifference;
- (id)initWithCGImage1:(struct CGImage { } *)a0 CGImage2:(struct CGImage { } *)a1;
- (id)initWithImagePath1:(id)a0 imagePath2:(id)a1;
- (id)initWithImageURL1:(id)a0 imageURL2:(id)a1;

@end
