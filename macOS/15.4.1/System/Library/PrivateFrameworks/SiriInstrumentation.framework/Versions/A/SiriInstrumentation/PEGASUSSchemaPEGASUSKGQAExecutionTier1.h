@class NSArray, NSString, NSData;

@interface PEGASUSSchemaPEGASUSKGQAExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *primaryEntities;
@property (copy, nonatomic) NSArray *secondaryEntities;
@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) BOOL hasAnswerId;
@property (copy, nonatomic) NSArray *claims;
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
- (void)addClaims:(id)a0;
- (void)addPrimaryEntities:(id)a0;
- (void)addSecondaryEntities:(id)a0;
- (id)claimsAtIndex:(unsigned long long)a0;
- (unsigned long long)claimsCount;
- (void)clearClaims;
- (void)clearPrimaryEntities;
- (void)clearSecondaryEntities;
- (void)deleteAnswerId;
- (void)deleteClaims;
- (void)deletePrimaryEntities;
- (void)deleteSecondaryEntities;
- (id)primaryEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)primaryEntitiesCount;
- (id)secondaryEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)secondaryEntitiesCount;
- (id)suppressMessageUnderConditions;

@end
