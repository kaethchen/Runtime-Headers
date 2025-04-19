@interface AVB17221AEMSensorFormat : AVB17221AEMObject <NSCopying>

@property unsigned long long sensorFormat;
@property BOOL vendorFormat;
@property unsigned char subtype;
@property unsigned char protocolType;
@property unsigned long long cfi;
@property unsigned int oui24;
@property unsigned long long vendorFormat24;
@property unsigned long long oui36;
@property unsigned int vendorFormat36;

+ (id)keyPathsForValuesAffectingOui24;
+ (id)keyPathsForValuesAffectingOui36;
+ (id)keyPathsForValuesAffectingProtocolType;
+ (id)keyPathsForValuesAffectingSubtype;
+ (id)keyPathsForValuesAffectingVendorFormat;
+ (id)keyPathsForValuesAffectingVendorFormat24;
+ (id)keyPathsForValuesAffectingVendorFormat36;
+ (id)keyPathsForValuesCfi;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned char)subtype;
- (unsigned char)protocolType;
- (void)setProtocolType:(unsigned char)a0;
- (void)setSubtype:(unsigned char)a0;
- (void)setCfi:(unsigned long long)a0;
- (unsigned long long)cfi;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned int)oui24;
- (unsigned long long)oui36;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (void)setOui24:(unsigned int)a0;
- (void)setOui36:(unsigned long long)a0;
- (void)setVendorFormat24:(unsigned long long)a0;
- (void)setVendorFormat36:(unsigned int)a0;
- (void)setVendorFormat:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (BOOL)vendorFormat;
- (unsigned long long)vendorFormat24;
- (unsigned int)vendorFormat36;
- (id)xmlRepresentation;

@end
