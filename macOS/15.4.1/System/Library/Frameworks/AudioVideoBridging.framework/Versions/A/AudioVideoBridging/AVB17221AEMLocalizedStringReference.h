@interface AVB17221AEMLocalizedStringReference : AVB17221AEMObject <NSCopying>

@property unsigned short reference;
@property unsigned short offset;
@property unsigned char index;

+ (id)keyPathsForValuesAffectingIndex;
+ (id)keyPathsForValuesAffectingOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned char)index;
- (unsigned short)offset;
- (void)setIndex:(unsigned char)a0;
- (void)setOffset:(unsigned short)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
