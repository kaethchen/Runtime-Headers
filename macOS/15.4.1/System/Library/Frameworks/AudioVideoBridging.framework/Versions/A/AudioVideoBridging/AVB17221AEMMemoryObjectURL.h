@class NSURL, NSData;

@interface AVB17221AEMMemoryObjectURL : AVB17221AEMMemoryObject {
    NSData *_data;
}

@property (copy) NSURL *dataURL;
@property (readonly, copy) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
