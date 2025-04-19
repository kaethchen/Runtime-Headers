@class NSArray, NSData;

@interface RFSchemaRFGradingDialogReportedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dialogLines;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addDialogLines:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearDialogLines;
- (void)deleteDialogLines;
- (id)dialogLinesAtIndex:(unsigned long long)a0;
- (unsigned long long)dialogLinesCount;
- (id)suppressMessageUnderConditions;

@end
