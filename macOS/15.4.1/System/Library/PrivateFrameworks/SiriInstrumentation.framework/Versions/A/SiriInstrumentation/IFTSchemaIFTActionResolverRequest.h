@class NSString, NSArray, IFTSchemaIFTParameterSet, NSData, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTActionResolverRequest : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char isClientAction : 1; unsigned char isConfirmed : 1; unsigned char isAuthenticated : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSString *toolId;
@property (nonatomic) BOOL hasToolId;
@property (nonatomic) BOOL isClientAction;
@property (nonatomic) BOOL hasIsClientAction;
@property (nonatomic) BOOL isConfirmed;
@property (nonatomic) BOOL hasIsConfirmed;
@property (nonatomic) BOOL isAuthenticated;
@property (nonatomic) BOOL hasIsAuthenticated;
@property (retain, nonatomic) IFTSchemaIFTParameterSet *resolvedParameters;
@property (nonatomic) BOOL hasResolvedParameters;
@property (copy, nonatomic) NSArray *unresolvedParameterSets;
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
- (id)unresolvedParameterSetsAtIndex:(unsigned long long)a0;
- (void)addUnresolvedParameterSets:(id)a0;
- (void)clearUnresolvedParameterSets;
- (void)deleteExists;
- (void)deleteIsAuthenticated;
- (void)deleteIsClientAction;
- (void)deleteIsConfirmed;
- (void)deleteResolvedParameters;
- (void)deleteStatementId;
- (void)deleteToolId;
- (void)deleteUnresolvedParameterSets;
- (id)suppressMessageUnderConditions;
- (unsigned long long)unresolvedParameterSetsCount;

@end
