@class NLGSchemaNLGScoredDialog, NLGSchemaNLGDialogScorer, NSData, NLGSchemaNLGDialogCandidateStatistics;

@interface NLGSchemaNLGScoredDialogSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLGSchemaNLGDialogScorer *dialogScorer;
@property (nonatomic) BOOL hasDialogScorer;
@property (retain, nonatomic) NLGSchemaNLGDialogCandidateStatistics *dialogCandidateStatistics;
@property (nonatomic) BOOL hasDialogCandidateStatistics;
@property (retain, nonatomic) NLGSchemaNLGScoredDialog *selectedScoredDialog;
@property (nonatomic) BOOL hasSelectedScoredDialog;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogCandidateStatistics;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDialogScorer;
- (void)deleteSelectedScoredDialog;
- (id)suppressMessageUnderConditions;

@end
