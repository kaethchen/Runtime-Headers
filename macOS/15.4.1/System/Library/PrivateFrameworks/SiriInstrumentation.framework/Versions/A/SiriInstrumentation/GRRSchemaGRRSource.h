@class NSData, SISchemaUUID;

@interface GRRSchemaGRRSource : SISchemaInstrumentationMessage {
    struct { unsigned char sourceType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sourceId;
@property (nonatomic) BOOL hasSourceId;
@property (nonatomic) int sourceType;
@property (nonatomic) BOOL hasSourceType;
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
- (void)deleteSourceId;
- (void)deleteSourceType;
- (id)suppressMessageUnderConditions;

@end
