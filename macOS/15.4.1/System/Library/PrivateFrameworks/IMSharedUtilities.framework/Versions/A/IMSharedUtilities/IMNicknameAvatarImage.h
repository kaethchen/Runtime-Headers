@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) BOOL imageExists;
@property (readonly, nonatomic) BOOL contentIsSensitive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageData;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)_writeImageData:(id)a0 path:(id)a1 error:(id *)a2;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 contentIsSensitive:(BOOL)a3;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 contentIsSensitive:(BOOL)a3 error:(id *)a4;
- (id)initWithImageName:(id)a0 imageFilePath:(id)a1 contentIsSensitive:(BOOL)a2;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 contentIsSensitive:(BOOL)a3 error:(id *)a4;
- (id)loadAndReturnImageData;
- (id)publicDictionaryMetadataRepresentation;
- (id)publicDictionaryRepresentation;

@end
