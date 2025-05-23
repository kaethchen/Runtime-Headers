@interface ATXTimelineRelevancePBTimelineRelevanceRotation : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char clientModelId : 1; unsigned char engagement : 1; unsigned char rotationEventType : 1; unsigned char isMediumOrHighConfidence : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasRotationEventType;
@property (nonatomic) int rotationEventType;
@property (nonatomic) BOOL hasIsMediumOrHighConfidence;
@property (nonatomic) BOOL isMediumOrHighConfidence;
@property (nonatomic) BOOL hasClientModelId;
@property (nonatomic) int clientModelId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL hasEngagement;
@property (nonatomic) int engagement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsClientModelId:(id)a0;
- (int)StringAsEngagement:(id)a0;
- (int)StringAsRotationEventType:(id)a0;
- (id)clientModelIdAsString:(int)a0;
- (id)engagementAsString:(int)a0;
- (id)rotationEventTypeAsString:(int)a0;

@end
