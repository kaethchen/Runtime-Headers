@class NSData;

@interface ODDSiriSchemaODDAppleIntelligenceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAppleIntelligenceEnabled : 1; unsigned char isRecordAppleIntelligenceActivity : 1; unsigned char isAppleIntelligenceHardwareCapable : 1; unsigned char isAppleIntelligenceAvailable : 1; unsigned char isChatGPTEnabled : 1; unsigned char isChatGPTConfirmationAlwaysRequired : 1; unsigned char chatGPTAccountType : 1; unsigned char isChatGPTSetUpPrompts : 1; } _has;
}

@property (nonatomic) BOOL isAppleIntelligenceEnabled;
@property (nonatomic) BOOL hasIsAppleIntelligenceEnabled;
@property (nonatomic) BOOL isRecordAppleIntelligenceActivity;
@property (nonatomic) BOOL hasIsRecordAppleIntelligenceActivity;
@property (nonatomic) BOOL isAppleIntelligenceHardwareCapable;
@property (nonatomic) BOOL hasIsAppleIntelligenceHardwareCapable;
@property (nonatomic) BOOL isAppleIntelligenceAvailable;
@property (nonatomic) BOOL hasIsAppleIntelligenceAvailable;
@property (nonatomic) BOOL isChatGPTEnabled;
@property (nonatomic) BOOL hasIsChatGPTEnabled;
@property (nonatomic) BOOL isChatGPTConfirmationAlwaysRequired;
@property (nonatomic) BOOL hasIsChatGPTConfirmationAlwaysRequired;
@property (nonatomic) int chatGPTAccountType;
@property (nonatomic) BOOL hasChatGPTAccountType;
@property (nonatomic) BOOL isChatGPTSetUpPrompts;
@property (nonatomic) BOOL hasIsChatGPTSetUpPrompts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteChatGPTAccountType;
- (void)deleteIsAppleIntelligenceAvailable;
- (void)deleteIsAppleIntelligenceEnabled;
- (void)deleteIsAppleIntelligenceHardwareCapable;
- (void)deleteIsChatGPTConfirmationAlwaysRequired;
- (void)deleteIsChatGPTEnabled;
- (void)deleteIsChatGPTSetUpPrompts;
- (void)deleteIsRecordAppleIntelligenceActivity;
- (id)suppressMessageUnderConditions;

@end
