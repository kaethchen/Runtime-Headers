@class IFTSchemaIFTSystemPromptResolutionInput, NSData, SISchemaUUID, IFTSchemaIFTSystemPromptResolutionUserAction, IFTSchemaIFTStatementId;

@interface IFTSchemaIFTSystemPromptResolution : SISchemaInstrumentationMessage {
    struct { unsigned char inputModality : 1; } _has;
}

@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionUserAction *userAction;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int inputModality;
@property (nonatomic) BOOL hasInputModality;
@property (retain, nonatomic) SISchemaUUID *actionEventId;
@property (nonatomic) BOOL hasActionEventId;
@property (retain, nonatomic) SISchemaUUID *systemResponseEventId;
@property (nonatomic) BOOL hasSystemResponseEventId;
@property (retain, nonatomic) IFTSchemaIFTSystemPromptResolutionInput *input;
@property (nonatomic) BOOL hasInput;
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
- (void)deleteActionEventId;
- (void)deleteInput;
- (void)deleteInputModality;
- (void)deleteStatementId;
- (void)deleteSystemResponseEventId;
- (void)deleteUserAction;
- (id)suppressMessageUnderConditions;

@end
