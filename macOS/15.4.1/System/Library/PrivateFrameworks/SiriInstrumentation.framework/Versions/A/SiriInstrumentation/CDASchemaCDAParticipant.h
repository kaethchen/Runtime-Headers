@class NSData, SISchemaUUID;

@interface CDASchemaCDAParticipant : SISchemaInstrumentationMessage {
    struct { unsigned char goodnessScore : 1; unsigned char deviceClass : 1; unsigned char productType : 1; } _has;
}

@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) BOOL hasGoodnessScore;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) unsigned int productType;
@property (nonatomic) BOOL hasProductType;
@property (retain, nonatomic) SISchemaUUID *electionParticipantId;
@property (nonatomic) BOOL hasElectionParticipantId;
@property (retain, nonatomic) SISchemaUUID *rotatedElectionParticipantId;
@property (nonatomic) BOOL hasRotatedElectionParticipantId;
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
- (void)deleteDeviceClass;
- (void)deleteElectionParticipantId;
- (void)deleteGoodnessScore;
- (void)deleteProductType;
- (void)deleteRotatedElectionParticipantId;
- (id)suppressMessageUnderConditions;

@end
