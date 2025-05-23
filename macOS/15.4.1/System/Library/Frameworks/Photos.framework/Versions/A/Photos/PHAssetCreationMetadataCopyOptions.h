@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;
@property (nonatomic) BOOL shouldCopySpatialOverCaptureResources;
@property (nonatomic) BOOL shouldCopyLocationData;

+ (id)metadataCopyOptionsForPublishingOriginals;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDict:(id)a0;
- (void)encodeToXPCDict:(id)a0;
- (id)plRepresentation;

@end
