@class MTSchemaMTLocalePair, NSData, SISchemaUUID;

@interface MTSchemaMTAppInvocationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char displayMode : 1; unsigned char isGenderAlternativeEnabled : 1; unsigned char tabName : 1; unsigned char isPlayTranslationsEnabled : 1; unsigned char conversationTabView : 1; unsigned char audioChannel : 1; } _has;
}

@property (nonatomic) int displayMode;
@property (nonatomic) BOOL hasDisplayMode;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair;
@property (nonatomic) BOOL hasLocalePair;
@property (nonatomic) BOOL isGenderAlternativeEnabled;
@property (nonatomic) BOOL hasIsGenderAlternativeEnabled;
@property (nonatomic) int tabName;
@property (nonatomic) BOOL hasTabName;
@property (retain, nonatomic) SISchemaUUID *tabSessionId;
@property (nonatomic) BOOL hasTabSessionId;
@property (retain, nonatomic) SISchemaUUID *autoTranslateSessionId;
@property (nonatomic) BOOL hasAutoTranslateSessionId;
@property (nonatomic) BOOL isPlayTranslationsEnabled;
@property (nonatomic) BOOL hasIsPlayTranslationsEnabled;
@property (nonatomic) int conversationTabView;
@property (nonatomic) BOOL hasConversationTabView;
@property (nonatomic) int audioChannel;
@property (nonatomic) BOOL hasAudioChannel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPlayTranslationsEnabled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAudioChannel;
- (void)deleteAutoTranslateSessionId;
- (void)deleteConversationTabView;
- (void)deleteDisplayMode;
- (void)deleteIsGenderAlternativeEnabled;
- (void)deleteLocalePair;
- (void)deleteTabName;
- (void)deleteTabSessionId;
- (id)suppressMessageUnderConditions;

@end
