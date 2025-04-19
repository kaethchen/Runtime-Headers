@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char lastSection : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;
@property (nonatomic) BOOL hasLastSection;
@property (nonatomic) BOOL lastSection;
@property (readonly, nonatomic) BOOL hasVerificationKey;
@property (retain, nonatomic) NSData *verificationKey;

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
