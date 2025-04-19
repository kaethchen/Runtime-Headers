@class NSArray, NSData;

@interface FLSchemaFLTupleInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char alignment : 1; } _has;
}

@property (copy, nonatomic) NSArray *identifiers;
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
- (void)clearIdentifiers;
- (unsigned long long)identifiersCount;
- (id)initWithJSON:(id)a0;
- (void)addIdentifiers:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlignment;
- (void)deleteIdentifiers;
- (id)identifiersAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
