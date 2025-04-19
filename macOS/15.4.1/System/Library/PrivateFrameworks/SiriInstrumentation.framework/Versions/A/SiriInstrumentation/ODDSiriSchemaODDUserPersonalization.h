@class NSArray, SISchemaVoiceSettings, NSData;

@interface ODDSiriSchemaODDUserPersonalization : SISchemaInstrumentationMessage {
    struct { unsigned char isPersonalDomainRequestsEnabled : 1; } _has;
}

@property (nonatomic) BOOL isPersonalDomainRequestsEnabled;
@property (nonatomic) BOOL hasIsPersonalDomainRequestsEnabled;
@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
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
- (int)activeSubscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeSubscriptionsCount;
- (void)addActiveSubscriptions:(int)a0;
- (void)clearActiveSubscriptions;
- (void)deleteActiveSubscriptions;
- (void)deleteIsPersonalDomainRequestsEnabled;
- (void)deleteVoiceSettings;
- (id)suppressMessageUnderConditions;

@end
