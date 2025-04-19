@interface IKImageViewUtils : NSObject

+ (long long)exifForRotationDegree:(double)a0 fromExif:(long long)a1;
+ (id)_commonOptionsForImageFromSource:(id)a0 wantsEDR:(BOOL)a1;
+ (BOOL)_imageHasAppropriateAttachedThumbnail:(struct CGImageSource { } *)a0 imageWidth:(double)a1 imageHeight:(double)a2 scale:(double)a3 outBestMaxDimension:(double *)a4;
+ (struct CGImage { } *)_newPossiblySubsampledImageFromSource:(struct CGImageSource { } *)a0 index:(long long)a1 imageScale:(double)a2 wantsEDR:(BOOL)a3 displayProperties:(id)a4;
+ (struct CGImage { } *)_newScaledImageFromSource:(struct CGImageSource { } *)a0 index:(long long)a1 imageScale:(double)a2 wantsEDR:(BOOL)a3 canUseExistingThumbnail:(BOOL)a4 displayProperties:(id)a5;
+ (long long)exifForFlip:(int)a0 fromExif:(long long)a1;
+ (int)flipTypeForExif:(long long)a0;
+ (BOOL)imageTypeSupportsSubsampling:(struct __CFString { } *)a0;
+ (struct CGImage { } *)newCGImageFromImgSrc:(struct CGImageSource { } *)a0 index:(long long)a1 displayProperties:(id)a2 imageScale:(double)a3 forceScale:(BOOL)a4 wantsEDR:(BOOL)a5 canUseExistingThumbnail:(BOOL)a6 createBitmapImmediately:(BOOL)a7;
+ (double)normalizedRotationDegree:(double)a0;
+ (double)rotationDegreeForExif:(long long)a0;

@end
