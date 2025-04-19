@class NSData;

@interface FLOWSchemaFLOWPhotosContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; unsigned char entityType : 1; unsigned char faceType : 1; } _has;
}

@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) int faceType;
@property (nonatomic) BOOL hasFaceType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityType;
- (void)deleteFaceType;
- (void)deleteTaskType;
- (id)suppressMessageUnderConditions;

@end
