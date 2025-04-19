@class NSMutableArray;

@interface AWDWiFiMetricsAssociationHistory : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *associationEvents;

+ (Class)associationEventsType;

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
- (void)addAssociationEvents:(id)a0;
- (id)associationEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)associationEventsCount;
- (void)clearAssociationEvents;

@end
