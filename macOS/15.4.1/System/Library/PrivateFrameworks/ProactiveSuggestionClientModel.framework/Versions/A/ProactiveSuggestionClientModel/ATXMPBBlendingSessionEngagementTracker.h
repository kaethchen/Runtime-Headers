@class NSString;

@interface ATXMPBBlendingSessionEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;

@end
