@class NSString, NSData, SISchemaRedactableString;

@interface SISchemaDialogOutput : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) BOOL hasViewID;
@property (retain, nonatomic) SISchemaRedactableString *spokenDialogOutput;
@property (nonatomic) BOOL hasSpokenDialogOutput;
@property (retain, nonatomic) SISchemaRedactableString *displayedDialogOutput;
@property (nonatomic) BOOL hasDisplayedDialogOutput;
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
- (void)deleteDisplayedDialogOutput;
- (void)deleteSpokenDialogOutput;
- (void)deleteViewID;
- (id)suppressMessageUnderConditions;

@end
