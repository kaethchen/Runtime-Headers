@interface AVB17221AEMVideoFormatSpecific : AVB17221AEMObject <NSCopying>

@property unsigned int formatSpecific;
@property unsigned char contentProtection;
@property unsigned char profile;
@property unsigned char level;
@property unsigned short formatSubtype;
@property unsigned short rtpPayloadSubtype;

+ (id)keyPathsForValuesAffectingLevel;
+ (id)keyPathsForValuesAffectingContentProtection;
+ (id)keyPathsForValuesAffectingFormatSubtype;
+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingRtpPayloadSubtype;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned char)level;
- (void)setLevel:(unsigned char)a0;
- (unsigned char)profile;
- (void)setProfile:(unsigned char)a0;
- (unsigned char)contentProtection;
- (void)setContentProtection:(unsigned char)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned short)formatSubtype;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (unsigned short)rtpPayloadSubtype;
- (void)setFormatSubtype:(unsigned short)a0;
- (void)setRtpPayloadSubtype:(unsigned short)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
