@interface AWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _ampduAGGs;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _rxMCSSuccess;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _rxVHTSuccess;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _txMCSSuccess;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _txVHTSuccess;
}

@property (readonly, nonatomic) unsigned long long rxVHTSuccessCount;
@property (readonly, nonatomic) unsigned long long *rxVHTSuccess;
@property (readonly, nonatomic) unsigned long long txVHTSuccessCount;
@property (readonly, nonatomic) unsigned long long *txVHTSuccess;
@property (readonly, nonatomic) unsigned long long rxMCSSuccessCount;
@property (readonly, nonatomic) unsigned long long *rxMCSSuccess;
@property (readonly, nonatomic) unsigned long long txMCSSuccessCount;
@property (readonly, nonatomic) unsigned long long *txMCSSuccess;
@property (readonly, nonatomic) unsigned long long ampduAGGsCount;
@property (readonly, nonatomic) unsigned long long *ampduAGGs;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAmpduAGG:(unsigned long long)a0;
- (void)addRxMCSSuccess:(unsigned long long)a0;
- (void)addRxVHTSuccess:(unsigned long long)a0;
- (void)addTxMCSSuccess:(unsigned long long)a0;
- (void)addTxVHTSuccess:(unsigned long long)a0;
- (unsigned long long)ampduAGGAtIndex:(unsigned long long)a0;
- (void)clearAmpduAGGs;
- (void)clearRxMCSSuccess;
- (void)clearRxVHTSuccess;
- (void)clearTxMCSSuccess;
- (void)clearTxVHTSuccess;
- (unsigned long long)rxMCSSuccessAtIndex:(unsigned long long)a0;
- (unsigned long long)rxVHTSuccessAtIndex:(unsigned long long)a0;
- (void)setAmpduAGGs:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setRxMCSSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setRxVHTSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setTxMCSSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setTxVHTSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)txMCSSuccessAtIndex:(unsigned long long)a0;
- (unsigned long long)txVHTSuccessAtIndex:(unsigned long long)a0;

@end
