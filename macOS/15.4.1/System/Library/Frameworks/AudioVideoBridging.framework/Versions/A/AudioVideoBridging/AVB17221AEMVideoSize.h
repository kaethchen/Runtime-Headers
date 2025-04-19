@interface AVB17221AEMVideoSize : AVB17221AEMObject <NSCopying>

@property unsigned int videoSize;
@property unsigned short frameWidth;
@property unsigned short frameHeight;

+ (id)_IIDCStandardSizes100M;
+ (id)_IIDCStandardSizes1G;
+ (id)keyPathsForValuesAffectingFrameHeight;
+ (id)keyPathsForValuesAffectingFrameWidth;
+ (id)videoSizeForIIDCFrameFormat:(unsigned short)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned short)frameHeight;
- (unsigned short)frameWidth;
- (void)setFrameHeight:(unsigned short)a0;
- (unsigned long long)bytesPerFrameWithColorSpace:(unsigned short)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned long long)iidcBytesPerPDUWithColorSpace:(unsigned short)a0;
- (unsigned short)iidcVideoFormatWithColorSpace:(unsigned short)a0;
- (unsigned long long)pixelsPerFrame;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (void)setFrameWidth:(unsigned short)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
