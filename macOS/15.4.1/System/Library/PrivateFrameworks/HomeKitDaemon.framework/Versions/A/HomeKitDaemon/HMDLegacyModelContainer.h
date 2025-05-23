@class HMFPairingIdentity;

@interface HMDLegacyModelContainer : HMBModelContainer

@property (readonly, nonatomic) HMFPairingIdentity *pairingIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)decodePropertyValueFromData:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (id)encodePropertyValue:(id)a0 forProperty:(id)a1 field:(id)a2 storageLocation:(unsigned long long)a3 error:(id *)a4;
- (Class)modelClassForTypeName:(id)a0;
- (id)modelFromData:(id)a0 encoding:(unsigned long long)a1 storageLocation:(unsigned long long)a2 type:(id)a3 error:(id *)a4;
- (id)decryptData:(id)a0 decompress:(BOOL)a1 error:(id *)a2;
- (id)encryptData:(id)a0 compress:(BOOL)a1 error:(id *)a2;
- (id)initWithDataVersion:(id)a0 legacyDataVersion:(id)a1 pairingIdentity:(id)a2;

@end
