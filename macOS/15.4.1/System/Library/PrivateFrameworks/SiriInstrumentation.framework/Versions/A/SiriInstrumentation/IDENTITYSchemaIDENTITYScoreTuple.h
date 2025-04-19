@class NSString, NSData, SISchemaUUID;

@interface IDENTITYSchemaIDENTITYScoreTuple : SISchemaInstrumentationMessage {
    struct { unsigned char confidenceScore : 1; } _has;
}

@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) BOOL hasUserEphemeralId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConfidenceScore;
- (void)deleteLoggableSharedUserId;
- (void)deleteUserEphemeralId;
- (id)suppressMessageUnderConditions;

@end
