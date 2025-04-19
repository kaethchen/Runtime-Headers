@class NSData;

@interface PSESchemaPSEAlarm : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriResultUseful : 1; unsigned char followUpType : 1; } _has;
}

@property (nonatomic) BOOL isSiriResultUseful;
@property (nonatomic) BOOL hasIsSiriResultUseful;
@property (nonatomic) int followUpType;
@property (nonatomic) BOOL hasFollowUpType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFollowUpType;
- (void)deleteIsSiriResultUseful;
- (id)suppressMessageUnderConditions;

@end
