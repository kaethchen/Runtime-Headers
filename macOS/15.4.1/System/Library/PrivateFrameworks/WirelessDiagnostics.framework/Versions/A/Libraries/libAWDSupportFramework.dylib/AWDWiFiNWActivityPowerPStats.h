@interface AWDWiFiNWActivityPowerPStats : PBCodable <NSCopying> {
    struct { unsigned char kRadioPhyReportRxDur : 1; unsigned char kRadioPhyReportTxDur : 1; } _has;
}

@property (nonatomic) BOOL hasKRadioPhyReportTxDur;
@property (nonatomic) unsigned long long kRadioPhyReportTxDur;
@property (nonatomic) BOOL hasKRadioPhyReportRxDur;
@property (nonatomic) unsigned long long kRadioPhyReportRxDur;

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
