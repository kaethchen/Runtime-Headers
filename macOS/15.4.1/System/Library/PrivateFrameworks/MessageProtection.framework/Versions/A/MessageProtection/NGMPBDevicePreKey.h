@class NGMPBP256Key, NSData;

@interface NGMPBDevicePreKey : PBCodable <NSCopying> {
    struct { unsigned char tetraVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDhKey;
@property (retain, nonatomic) NGMPBP256Key *dhKey;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSData *prekeySignature;
@property (readonly, nonatomic) BOOL hasTetraPrivateKey;
@property (retain, nonatomic) NSData *tetraPrivateKey;
@property (readonly, nonatomic) BOOL hasTetraRegistrationData;
@property (retain, nonatomic) NSData *tetraRegistrationData;
@property (nonatomic) BOOL hasTetraVersion;
@property (nonatomic) unsigned int tetraVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
