@interface PREUMResponseItem : PBCodable <NSCopying> {
    struct { unsigned char modelId : 1; unsigned char replyTextId : 1; unsigned char responseClassId : 1; unsigned char isCustomResponse : 1; unsigned char isRobotResponse : 1; } _has;
}

@property (nonatomic) BOOL hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) BOOL hasResponseClassId;
@property (nonatomic) unsigned int responseClassId;
@property (nonatomic) BOOL hasReplyTextId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) BOOL hasIsCustomResponse;
@property (nonatomic) BOOL isCustomResponse;
@property (nonatomic) BOOL hasIsRobotResponse;
@property (nonatomic) BOOL isRobotResponse;

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
