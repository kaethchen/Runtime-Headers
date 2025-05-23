@class NSString;

@interface PXPhotosFileProviderRegisterConfiguration : NSObject {
    void /* unknown type, empty encoding */ livePhotoContentType;
    void /* unknown type, empty encoding */ autoLoopAsGIFContentType;
    void /* unknown type, empty encoding */ liveWallpaperContentType;
    void /* unknown type, empty encoding */ thumbnailLowContentType;
    void /* unknown type, empty encoding */ thumbnailStandardContentType;
    void /* unknown type, empty encoding */ mailMovieExportContentType;
}

@property (class, nonatomic, readonly) NSString *typeIdentifierLivePhotoBundlePrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierAutoLoopAsGIFPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierLiveWallpaperPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierThumbnailLowPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierThumbnailStandardPrivate;
@property (class, nonatomic, readonly) NSString *typeIdentifierMailMovieExportPrivate;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ usage;
@property (nonatomic) void /* unknown type, empty encoding */ userEncodingPolicy;
@property (nonatomic) void /* unknown type, empty encoding */ clientEncodingPolicy;
@property (nonatomic) void /* unknown type, empty encoding */ shouldIncludeLocation;
@property (nonatomic) void /* unknown type, empty encoding */ shouldIncludeCaption;
@property (nonatomic, retain) void /* unknown type, empty encoding */ downscalingTargetDimension;
@property (nonatomic) void /* unknown type, empty encoding */ isLiveWallpaperSelection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUsage:(long long)a0;

@end
