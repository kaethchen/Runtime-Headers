@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals *contactDependentMessageSignals;
@property (nonatomic) BOOL hasContactDependentMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals *contactDependentPhoneCallSignals;
@property (nonatomic) BOOL hasContactDependentPhoneCallSignals;
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
- (void)deleteContactDependentMessageSignals;
- (void)deleteContactDependentPhoneCallSignals;
- (id)suppressMessageUnderConditions;

@end
