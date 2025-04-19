@class CNWallpaperMetadata, NSString, NSDictionary, NSData;

@interface CNWallpaper : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *posterArchiveData;
@property (retain, nonatomic) NSData *dataRepresentation;
@property (nonatomic) BOOL contentIsSensitive;
@property (retain, nonatomic) NSData *generatedWatchImageData;
@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) CNWallpaperMetadata *metadata;
@property (readonly, nonatomic) NSDictionary *fontDescription;
@property (readonly, nonatomic) NSDictionary *fontColorDescription;
@property (readonly, nonatomic) NSDictionary *backgroundColorDescription;
@property (readonly, nonatomic) NSString *extensionBundleID;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;
@property (readonly, nonatomic) NSData *visualFingerprintData;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)dataRepresentationForPersistence;
- (id)generateSnapshotImageDataForWatch;
- (id)initWithDataRepresentationForPersistence:(id)a0;
- (id)initWithImageData:(id)a0 posterArchiveData:(id)a1;
- (id)initWithImageData:(id)a0 type:(id)a1;
- (id)initWithPosterArchiveData:(id)a0;
- (id)initWithPosterArchiveData:(id)a0 contentIsSensitive:(BOOL)a1;
- (id)initWithPosterArchiveData:(id)a0 fontDescription:(id)a1 fontColorDescription:(id)a2 backgroundColorDescription:(id)a3 extensionBundleID:(id)a4 vertical:(BOOL)a5 visualFingerprintData:(id)a6 contentIsSensitive:(BOOL)a7;
- (id)initWithPosterArchiveData:(id)a0 metadata:(id)a1 contentIsSensitive:(BOOL)a2;
- (id)wallpaperIncludingIMWallpaperMetadata:(id)a0;

@end
