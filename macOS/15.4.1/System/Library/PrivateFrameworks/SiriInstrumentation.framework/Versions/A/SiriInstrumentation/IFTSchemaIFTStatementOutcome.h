@class IFTSchemaIFTActionConfirmation, IFTSchemaIFTActionSuccess, NSData, IFTSchemaIFTParameterDisambiguation, IFTSchemaIFTParameterNeedsValue, IFTSchemaIFTParameterCandidatesNotFound, IFTSchemaIFTParameterConfirmation, IFTSchemaIFTActionRequirement, IFTSchemaIFTToolDisambiguation, IFTSchemaIFTParameterNotAllowed, IFTSchemaIFTActionFailure, IFTSchemaIFTValueDisambiguation;

@interface IFTSchemaIFTStatementOutcome : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTActionSuccess *success;
@property (nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) IFTSchemaIFTActionConfirmation *actionConfirmation;
@property (nonatomic) BOOL hasActionConfirmation;
@property (retain, nonatomic) IFTSchemaIFTParameterNeedsValue *parameterNeedsValue;
@property (nonatomic) BOOL hasParameterNeedsValue;
@property (retain, nonatomic) IFTSchemaIFTParameterConfirmation *parameterConfirmation;
@property (nonatomic) BOOL hasParameterConfirmation;
@property (retain, nonatomic) IFTSchemaIFTParameterDisambiguation *parameterDisambiguation;
@property (nonatomic) BOOL hasParameterDisambiguation;
@property (retain, nonatomic) IFTSchemaIFTParameterNotAllowed *parameterNotAllowed;
@property (nonatomic) BOOL hasParameterNotAllowed;
@property (retain, nonatomic) IFTSchemaIFTParameterCandidatesNotFound *parameterCandidatesNotFounds;
@property (nonatomic) BOOL hasParameterCandidatesNotFounds;
@property (retain, nonatomic) IFTSchemaIFTActionRequirement *actionRequirement;
@property (nonatomic) BOOL hasActionRequirement;
@property (retain, nonatomic) IFTSchemaIFTToolDisambiguation *toolDisambiguation;
@property (nonatomic) BOOL hasToolDisambiguation;
@property (retain, nonatomic) IFTSchemaIFTActionFailure *failure;
@property (nonatomic) BOOL hasFailure;
@property (retain, nonatomic) IFTSchemaIFTValueDisambiguation *valueDisambiguation;
@property (nonatomic) BOOL hasValueDisambiguation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Statementoutcome;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteActionConfirmation;
- (void)deleteActionRequirement;
- (void)deleteFailure;
- (void)deleteParameterCandidatesNotFounds;
- (void)deleteParameterConfirmation;
- (void)deleteParameterDisambiguation;
- (void)deleteParameterNeedsValue;
- (void)deleteParameterNotAllowed;
- (void)deleteSuccess;
- (void)deleteToolDisambiguation;
- (void)deleteValueDisambiguation;
- (id)suppressMessageUnderConditions;

@end
