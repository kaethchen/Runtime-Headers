@class AVB17221AEMSamplingRate;

@interface AVB17221AEMSamplingRateRange : AVB17221AEMObject <NSCopying>

@property (copy) AVB17221AEMSamplingRate *minimumRate;
@property (copy) AVB17221AEMSamplingRate *maximumRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
