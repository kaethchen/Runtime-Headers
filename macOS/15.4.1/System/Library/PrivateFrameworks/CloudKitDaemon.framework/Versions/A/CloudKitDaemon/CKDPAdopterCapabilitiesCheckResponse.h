@class CKDPSignedVersionedBlob;

@interface CKDPAdopterCapabilitiesCheckResponse : PBCodable <NSCopying> {
    struct { unsigned char isSupported : 1; } _has;
}

@property (nonatomic) BOOL hasIsSupported;
@property (nonatomic) BOOL isSupported;
@property (readonly, nonatomic) BOOL hasSignedSupportedAdopterCapabilities;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedSupportedAdopterCapabilities;
@property (readonly, nonatomic) BOOL hasSignedShareUsage;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedShareUsage;
@property (readonly, nonatomic) BOOL hasSignedZoneUsage;
@property (retain, nonatomic) CKDPSignedVersionedBlob *signedZoneUsage;

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
