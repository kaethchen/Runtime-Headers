@interface AVB17221AEMVideoAspectRatio : AVB17221AEMObject <NSCopying>

@property unsigned short aspectRatio;
@property unsigned char pixelWidth;
@property unsigned char pixelHeight;

+ (id)keyPathsForValuesAffectingPixelHeight;
+ (id)keyPathsForValuesAffectingPixelWidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setPixelHeight:(unsigned char)a0;
- (unsigned char)pixelHeight;
- (unsigned char)pixelWidth;
- (void)setPixelWidth:(unsigned char)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
