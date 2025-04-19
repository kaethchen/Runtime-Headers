@class NSString, SISchemaVersion, NSData;

@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL hasModelName;
@property (retain, nonatomic) SISchemaVersion *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteModelName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteModelVersion;
- (id)suppressMessageUnderConditions;

@end
