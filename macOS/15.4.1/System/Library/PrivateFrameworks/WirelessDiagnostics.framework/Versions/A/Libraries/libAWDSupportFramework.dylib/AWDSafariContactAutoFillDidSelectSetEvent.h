@interface AWDSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char selectedSet : 1; unsigned char hadPreviouslyCustomizedSet : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSelectedSet;
@property (nonatomic) int selectedSet;
@property (nonatomic) BOOL hasHadPreviouslyCustomizedSet;
@property (nonatomic) BOOL hadPreviouslyCustomizedSet;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSelectedSet:(id)a0;
- (id)selectedSetAsString:(int)a0;

@end
