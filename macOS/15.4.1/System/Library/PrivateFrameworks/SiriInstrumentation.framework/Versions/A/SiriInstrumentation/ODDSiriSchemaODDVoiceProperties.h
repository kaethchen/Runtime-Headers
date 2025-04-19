@class SISchemaISOLocale, NSArray, NSData;

@interface ODDSiriSchemaODDVoiceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char gender : 1; unsigned char name : 1; } _has;
}

@property (nonatomic) int gender;
@property (nonatomic) BOOL hasGender;
@property (retain, nonatomic) SISchemaISOLocale *accent;
@property (nonatomic) BOOL hasAccent;
@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSArray *installedVoices;
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
- (void)addInstalledVoices:(int)a0;
- (void)clearInstalledVoices;
- (void)deleteAccent;
- (void)deleteGender;
- (void)deleteInstalledVoices;
- (void)deleteName;
- (int)installedVoicesAtIndex:(unsigned long long)a0;
- (unsigned long long)installedVoicesCount;
- (id)suppressMessageUnderConditions;

@end
