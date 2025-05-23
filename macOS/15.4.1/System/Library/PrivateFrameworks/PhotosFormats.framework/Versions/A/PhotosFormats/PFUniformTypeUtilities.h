@class NSString, NSArray, UTType;

@interface PFUniformTypeUtilities : NSObject

@property (class, readonly) UTType *photosLibraryType;
@property (class, readonly) NSString *photosLibraryIdentifier;
@property (class, readonly) UTType *iPhotoLibraryType;
@property (class, readonly) NSString *iPhotoLibraryIdentifier;
@property (class, readonly) UTType *apertureLibraryType;
@property (class, readonly) NSString *apertureLibraryIdentifier;
@property (class, readonly) UTType *supplementalResourceXMPType;
@property (class, readonly) NSString *supplementalResourceXMPIdentifier;
@property (class, readonly) UTType *supplementalResourceAAEType;
@property (class, readonly) NSString *supplementalResourceAAEIdentifier;
@property (class, readonly) UTType *livePhotoBundleType;
@property (class, readonly) NSString *livePhotoBundleIdentifier;
@property (class, readonly) UTType *livePhotoBundlePrivateType;
@property (class, readonly) NSString *livePhotoBundlePrivateIdentifier;
@property (class, readonly) UTType *avifType;
@property (class, readonly) NSString *avifIdentifier;
@property (class, readonly) UTType *heicSequenceType;
@property (class, readonly) NSString *heicSequenceIdentifier;
@property (class, readonly) UTType *adobePhotoshopType;
@property (class, readonly) NSString *adobePhotoshopIdentifier;
@property (class, readonly) UTType *adobeIllustratorType;
@property (class, readonly) NSString *adobeIllustratorIdentifier;
@property (class, readonly) UTType *pictType;
@property (class, readonly) NSString *pictIdentifier;
@property (class, readonly) UTType *quicktimeImageType;
@property (class, readonly) NSString *quicktimeImageIdentifier;
@property (class, readonly) UTType *icoType;
@property (class, readonly) NSString *icoIdentifier;
@property (class, readonly) UTType *macPaintType;
@property (class, readonly) NSString *macPaintIdentifier;
@property (class, readonly) UTType *jpeg2000Type;
@property (class, readonly) NSString *jpeg2000Identifier;
@property (class, readonly) UTType *jpegXLType;
@property (class, readonly) NSString *jpegXLIdentifier;
@property (class, readonly) UTType *sonyARWRAWImageType;
@property (class, readonly) NSString *sonyARWRAWImageIdentifier;
@property (class, readonly) UTType *canonCR2RAWImageType;
@property (class, readonly) NSString *canonCR2RAWImageIdentifier;
@property (class, readonly) UTType *canonCRWRAWImageType;
@property (class, readonly) NSString *canonCRWRAWImageIdentifier;
@property (class, readonly) UTType *canonTIFFRAWImageType;
@property (class, readonly) NSString *canonTIFFRAWImageIdentifier;
@property (class, readonly) UTType *olympusRAWImageType;
@property (class, readonly) NSString *olympusRAWImageIdentifier;
@property (class, readonly) UTType *panasonicRW2RAWImageType;
@property (class, readonly) NSString *panasonicRW2RAWImageIdentifier;
@property (class, readonly) UTType *panasonicRAWImageType;
@property (class, readonly) NSString *panasonicRAWImageIdentifier;
@property (class, readonly) UTType *pentaxRAWImageType;
@property (class, readonly) NSString *pentaxRAWImageIdentifier;
@property (class, readonly) UTType *nikonRAWImageType;
@property (class, readonly) NSString *nikonRAWImageIdentifier;
@property (class, readonly) UTType *samsungRAWImageType;
@property (class, readonly) NSString *samsungRAWImageIdentifier;
@property (class, readonly) UTType *fujiRAWImageType;
@property (class, readonly) NSString *fujiRAWImageIdentifier;
@property (class, readonly) UTType *leafamericaRAWImageType;
@property (class, readonly) NSString *leafamericaRAWImageIdentifier;
@property (class, readonly) UTType *hasselblad3FRRAWImageType;
@property (class, readonly) NSString *hasselblad3FRRAWImageIdentifier;
@property (class, readonly) UTType *hasselbladFFFRAWImageType;
@property (class, readonly) NSString *hasselbladFFFRAWImageIdentifier;
@property (class, readonly) UTType *openEXRImageType;
@property (class, readonly) NSString *openEXRImageIdentifier;
@property (class, readonly) NSArray *typesSupportedForImport;
@property (class, readonly) NSArray *supportedImageTypes;
@property (class, readonly) NSArray *supportedMovieTypes;
@property (class, readonly) NSArray *supportedAudioTypes;
@property (class, readonly) NSArray *imageTypesUnsupportedForImport;
@property (class, readonly) NSArray *imageTypesNotWellSupportedForSharing;

+ (id)typeWithFilenameExtension:(id)a0;
+ (id)typeWithIdentifier:(id)a0;
+ (id)typeWithFilenameExtension:(id)a0 conformingToType:(id)a1;
+ (BOOL)filenameExtension:(id)a0 conformsToOneOfTypes:(id)a1;
+ (id)resourceModelTypeForFilenameExtension:(id)a0;
+ (BOOL)type:(id)a0 conformsToOneOfTypes:(id)a1;
+ (id)typeForFilenameExtensionOrLastPathComponent:(id)a0;
+ (id)typeForURL:(id)a0 error:(id *)a1;
+ (BOOL)url:(id)a0 conformsToOneOfTypes:(id)a1;
+ (BOOL)url:(id)a0 conformsToType:(id)a1;
+ (id)preferredOrFallbackFilenameExtensionForType:(id)a0 fallbackIdentifier:(id)a1;
+ (id)preferredOrFallbackFilenameExtensionForType:(id)a0;
+ (id)typeForHFSType:(unsigned int)a0;
+ (id)typeForHFSType:(unsigned int)a0 conformingToType:(id)a1;

@end
