@interface AWDMETRICSKCellularPowerLogPlmnSearchEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char rat : 1; unsigned char result : 1; unsigned char searchReason : 1; unsigned char searchType : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) int result;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) int rat;
@property (nonatomic) BOOL hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic) BOOL hasSearchReason;
@property (nonatomic) int searchReason;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsResult:(id)a0;
- (id)resultAsString:(int)a0;
- (int)StringAsSearchType:(id)a0;
- (id)searchTypeAsString:(int)a0;
- (int)StringAsSearchReason:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)ratAsString:(int)a0;
- (id)searchReasonAsString:(int)a0;

@end
