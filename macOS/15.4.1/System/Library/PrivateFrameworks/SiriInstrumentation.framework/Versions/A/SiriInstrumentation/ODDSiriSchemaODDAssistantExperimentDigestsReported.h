@class NSArray, ODDSiriSchemaODDFixedDimensions, NSData, ODDSiriSchemaODDExperimentFixedDimensions;

@interface ODDSiriSchemaODDAssistantExperimentDigestsReported : SISchemaInstrumentationMessage {
    struct { unsigned char digestType : 1; } _has;
}

@property (nonatomic) int digestType;
@property (nonatomic) BOOL hasDigestType;
@property (retain, nonatomic) ODDSiriSchemaODDExperimentFixedDimensions *experimentFixedDimensions;
@property (nonatomic) BOOL hasExperimentFixedDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) BOOL hasFixedDimensions;
@property (copy, nonatomic) NSArray *digests;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExperimentFixedDimensions;
- (id)digestsAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addDigests:(id)a0;
- (void)clearDigests;
- (void)deleteDigestType;
- (void)deleteDigests;
- (void)deleteFixedDimensions;
- (unsigned long long)digestsCount;
- (id)suppressMessageUnderConditions;

@end
