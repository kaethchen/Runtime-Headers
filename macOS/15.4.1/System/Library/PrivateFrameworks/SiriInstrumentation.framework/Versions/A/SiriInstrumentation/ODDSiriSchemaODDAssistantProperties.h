@class ODDSiriSchemaODDVoiceProperties, ODDSiriSchemaODDOptInProperties, ODDSiriSchemaODDAppleIntelligenceProperties, NSData, SISchemaISOLocale, ODDSiriSchemaODDHomeKitProperties;

@interface ODDSiriSchemaODDAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAssistantEnabled : 1; unsigned char listenFor : 1; unsigned char numSiriShortcutsEnabled : 1; unsigned char isPreciseLocationEnabled : 1; unsigned char locationAccessPermission : 1; } _has;
}

@property (nonatomic) BOOL isAssistantEnabled;
@property (nonatomic) BOOL hasIsAssistantEnabled;
@property (retain, nonatomic) SISchemaISOLocale *inputLocale;
@property (nonatomic) BOOL hasInputLocale;
@property (nonatomic) int listenFor;
@property (nonatomic) BOOL hasListenFor;
@property (nonatomic) int numSiriShortcutsEnabled;
@property (nonatomic) BOOL hasNumSiriShortcutsEnabled;
@property (nonatomic) BOOL isPreciseLocationEnabled;
@property (nonatomic) BOOL hasIsPreciseLocationEnabled;
@property (retain, nonatomic) ODDSiriSchemaODDVoiceProperties *voice;
@property (nonatomic) BOOL hasVoice;
@property (retain, nonatomic) ODDSiriSchemaODDOptInProperties *optIn;
@property (nonatomic) BOOL hasOptIn;
@property (retain, nonatomic) ODDSiriSchemaODDHomeKitProperties *homeKit;
@property (nonatomic) BOOL hasHomeKit;
@property (nonatomic) int locationAccessPermission;
@property (nonatomic) BOOL hasLocationAccessPermission;
@property (retain, nonatomic) ODDSiriSchemaODDAppleIntelligenceProperties *appleIntelligence;
@property (nonatomic) BOOL hasAppleIntelligence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteListenFor;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppleIntelligence;
- (void)deleteHomeKit;
- (void)deleteInputLocale;
- (void)deleteIsAssistantEnabled;
- (void)deleteIsPreciseLocationEnabled;
- (void)deleteLocationAccessPermission;
- (void)deleteNumSiriShortcutsEnabled;
- (void)deleteOptIn;
- (void)deleteVoice;
- (id)suppressMessageUnderConditions;

@end
