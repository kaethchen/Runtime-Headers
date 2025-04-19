@class NSString, NSData;

@interface FLOWLINKSchemaFLOWLINKAppShortcutGeneralizedExecutionUsed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appShortcutId;
@property (nonatomic) BOOL hasAppShortcutId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppShortcutId;
- (id)suppressMessageUnderConditions;

@end
