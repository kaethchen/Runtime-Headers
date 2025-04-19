@interface AVB17221AEMVideoMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short programStream;
@property unsigned short elementaryStream;
@property unsigned short clusterOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
