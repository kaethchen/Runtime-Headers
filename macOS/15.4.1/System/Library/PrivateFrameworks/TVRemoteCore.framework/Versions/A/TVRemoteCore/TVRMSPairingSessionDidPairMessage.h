@class NSString;

@interface TVRMSPairingSessionDidPairMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (readonly, nonatomic) BOOL hasServiceNetworkName;
@property (retain, nonatomic) NSString *serviceNetworkName;
@property (readonly, nonatomic) BOOL hasPairingGUID;
@property (retain, nonatomic) NSString *pairingGUID;

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
