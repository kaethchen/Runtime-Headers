@class NSData;

@interface AWDMETRICSKCellularPowerLogNRPagingDRXCycle : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char fr : 1; unsigned char numSubs : 1; unsigned char pagingDrxCycle : 1; unsigned char subsId : 1; unsigned char isDataPreferred : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPagingDrxCycle;
@property (nonatomic) unsigned int pagingDrxCycle;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) int fr;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasNumSubs;
@property (nonatomic) unsigned int numSubs;
@property (readonly, nonatomic) BOOL hasPlmn;
@property (retain, nonatomic) NSData *plmn;
@property (nonatomic) BOOL hasIsDataPreferred;
@property (nonatomic) BOOL isDataPreferred;

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
- (int)StringAsFr:(id)a0;
- (id)frAsString:(int)a0;

@end
