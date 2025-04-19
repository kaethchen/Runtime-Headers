@class NSMutableArray;

@interface HMXPCEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicFilterAdditions;
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals;

+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;

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
- (void)addTopicFilterAdditions:(id)a0;
- (void)addTopicFilterRemovals:(id)a0;
- (void)clearTopicFilterAdditions;
- (void)clearTopicFilterRemovals;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicFilterAdditionsCount;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicFilterRemovalsCount;

@end
