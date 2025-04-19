@class NSData, FLSchemaFLCandidateIdentifier;

@interface FLSchemaFLCandidateInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char alignment : 1; } _has;
}

@property (retain, nonatomic) FLSchemaFLCandidateIdentifier *identifier;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) int alignment;
@property (nonatomic) BOOL hasAlignment;
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
- (void)deleteAlignment;
- (void)deleteIdentifier;
- (id)suppressMessageUnderConditions;

@end
