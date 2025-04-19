@interface AVB17221AEMObject : NSObject

+ (void)initialize;
+ (Class)classForDescriptorType:(unsigned short)a0;
+ (void)setClass:(Class)a0 asClassForDescriptorType:(unsigned short)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)plistRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlKey;
- (id)xmlRepresentation;

@end
