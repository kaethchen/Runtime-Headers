@class NSArray, NSData;

@interface JRSchemaJRModelDiagnosticsSignals : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *modelDiagnosticSignals;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addModelDiagnosticSignals:(float)a0;
- (void)clearModelDiagnosticSignals;
- (void)deleteModelDiagnosticSignals;
- (float)modelDiagnosticSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)modelDiagnosticSignalsCount;
- (id)suppressMessageUnderConditions;

@end
