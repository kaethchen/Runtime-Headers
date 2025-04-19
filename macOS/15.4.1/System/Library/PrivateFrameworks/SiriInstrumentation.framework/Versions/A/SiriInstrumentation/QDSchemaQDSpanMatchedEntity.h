@class NSArray, NSData, SISchemaUUID, QDSchemaQDEntityType;

@interface QDSchemaQDSpanMatchedEntity : SISchemaInstrumentationMessage {
    struct { unsigned char dataProtectionClass : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *sessionScopedUniqueId;
@property (nonatomic) BOOL hasSessionScopedUniqueId;
@property (retain, nonatomic) QDSchemaQDEntityType *valueType;
@property (nonatomic) BOOL hasValueType;
@property (copy, nonatomic) NSArray *matches;
@property (nonatomic) int dataProtectionClass;
@property (nonatomic) BOOL hasDataProtectionClass;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)matchesAtIndex:(unsigned long long)a0;
- (void)addMatches:(id)a0;
- (void)clearMatches;
- (id)initWithJSON:(id)a0;
- (unsigned long long)matchesCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteValueType;
- (void)deleteDataProtectionClass;
- (void)deleteMatches;
- (void)deleteSessionScopedUniqueId;
- (id)suppressMessageUnderConditions;

@end
