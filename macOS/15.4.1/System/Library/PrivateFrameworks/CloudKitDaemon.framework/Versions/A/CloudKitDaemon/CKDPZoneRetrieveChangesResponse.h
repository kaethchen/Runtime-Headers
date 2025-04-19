@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *changedZones;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

+ (Class)changedZonesType;

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
- (int)StringAsStatus:(id)a0;
- (id)statusAsString:(int)a0;
- (void)addChangedZones:(id)a0;
- (id)changedZonesAtIndex:(unsigned long long)a0;
- (unsigned long long)changedZonesCount;
- (void)clearChangedZones;

@end
