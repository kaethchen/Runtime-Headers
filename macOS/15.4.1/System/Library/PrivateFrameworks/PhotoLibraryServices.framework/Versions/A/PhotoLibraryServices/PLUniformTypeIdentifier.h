@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)jpegUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)videoComplementUniformTypeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDynamic;
- (BOOL)isLosslessEncoding;
- (BOOL)isPrimaryImageFormat;
- (BOOL)conformsToImage;
- (BOOL)conformsToAudio;
- (BOOL)conformsToMovie;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToData;
- (BOOL)conformsToHEIC;
- (BOOL)conformsToHEIF;
- (BOOL)conformsToJPEG;
- (BOOL)conformsToRawImage;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (id)preferredExtension;

@end
