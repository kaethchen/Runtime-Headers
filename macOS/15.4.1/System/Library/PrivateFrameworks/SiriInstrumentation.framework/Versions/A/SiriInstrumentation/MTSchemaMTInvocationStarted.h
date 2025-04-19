@class MTSchemaMTAppInvocationMetadata, NSData, SISchemaUUID, MTSchemaMTApiInvocationMetadata;

@interface MTSchemaMTInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isOnDeviceTranslation : 1; unsigned char mobileAssetConfigVersion : 1; unsigned char task : 1; unsigned char inputSource : 1; unsigned char isExplicitLanguageFilterEnabled : 1; unsigned char isLanguageIdentificationEnabled : 1; unsigned char displayMode : 1; unsigned char invocationType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL isOnDeviceTranslation;
@property (nonatomic) BOOL hasIsOnDeviceTranslation;
@property (nonatomic) unsigned int mobileAssetConfigVersion;
@property (nonatomic) BOOL hasMobileAssetConfigVersion;
@property (nonatomic) int task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) int inputSource;
@property (nonatomic) BOOL hasInputSource;
@property (nonatomic) BOOL isExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL isLanguageIdentificationEnabled;
@property (nonatomic) BOOL hasIsLanguageIdentificationEnabled;
@property (nonatomic) int displayMode;
@property (nonatomic) BOOL hasDisplayMode;
@property (retain, nonatomic) SISchemaUUID *qssSessionId;
@property (nonatomic) BOOL hasQssSessionId;
@property (nonatomic) int invocationType;
@property (nonatomic) BOOL hasInvocationType;
@property (retain, nonatomic) MTSchemaMTAppInvocationMetadata *appInvocationMetadata;
@property (nonatomic) BOOL hasAppInvocationMetadata;
@property (retain, nonatomic) MTSchemaMTApiInvocationMetadata *apiInvocationMetadata;
@property (nonatomic) BOOL hasApiInvocationMetadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichInvocationmetadata;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteApiInvocationMetadata;
- (void)deleteAppInvocationMetadata;
- (void)deleteDisplayMode;
- (void)deleteInputSource;
- (void)deleteInvocationType;
- (void)deleteIsExplicitLanguageFilterEnabled;
- (void)deleteIsLanguageIdentificationEnabled;
- (void)deleteIsOnDeviceTranslation;
- (void)deleteLinkId;
- (void)deleteMobileAssetConfigVersion;
- (void)deleteQssSessionId;
- (void)deleteTask;
- (id)suppressMessageUnderConditions;

@end
