@interface TVRMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; unsigned char wifiAvailable : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) BOOL hasWifiAvailable;
@property (nonatomic) BOOL wifiAvailable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
