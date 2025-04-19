@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying> {
    struct { unsigned char fetchType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) BOOL hasFetchType;
@property (nonatomic) int fetchType;

+ (Class)topicsType;

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
- (void)addTopics:(id)a0;
- (void)clearTopics;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicsCount;
- (int)StringAsFetchType:(id)a0;
- (id)fetchTypeAsString:(int)a0;

@end
