@class NSData, HMEProtoEventMetadata;

@interface HMEProtoEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEventData;
@property (retain, nonatomic) NSData *eventData;
@property (readonly, nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) HMEProtoEventMetadata *eventMetadata;

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
