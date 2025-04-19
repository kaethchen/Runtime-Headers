@class INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals, NSArray, NSData;

@interface INFERENCESchemaINFERENCENotebookAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals *inferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (nonatomic) BOOL hasInferenceNotebookAppSelectionTrainingAppIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceNotebookAppSelectionTrainingAppDependentSignals;
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
- (void)addInferenceNotebookAppSelectionTrainingAppDependentSignals:(id)a0;
- (void)clearInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceNotebookAppSelectionTrainingAppIndependentSignals;
- (id)inferenceNotebookAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceNotebookAppSelectionTrainingAppDependentSignalsCount;
- (id)suppressMessageUnderConditions;

@end
