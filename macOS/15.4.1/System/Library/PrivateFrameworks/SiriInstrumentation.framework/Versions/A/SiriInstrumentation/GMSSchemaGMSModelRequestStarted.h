@class NSString, NSData, SISchemaUUID;

@interface GMSSchemaGMSModelRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char accountType : 1; unsigned char isWebSearchUsed : 1; unsigned char isUserSignedIn : 1; unsigned char modelParty : 1; unsigned char modelLocation : 1; unsigned char useCase : 1; unsigned char externalPartner : 1; } _has;
}

@property (nonatomic) int accountType;
@property (nonatomic) BOOL hasAccountType;
@property (nonatomic) BOOL isWebSearchUsed;
@property (nonatomic) BOOL hasIsWebSearchUsed;
@property (nonatomic) BOOL isUserSignedIn;
@property (nonatomic) BOOL hasIsUserSignedIn;
@property (nonatomic) int modelParty;
@property (nonatomic) BOOL hasModelParty;
@property (nonatomic) int modelLocation;
@property (nonatomic) BOOL hasModelLocation;
@property (nonatomic) int useCase;
@property (nonatomic) BOOL hasUseCase;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) BOOL hasConfigVersion;
@property (copy, nonatomic) NSString *promptVersion;
@property (nonatomic) BOOL hasPromptVersion;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL hasModelName;
@property (nonatomic) int externalPartner;
@property (nonatomic) BOOL hasExternalPartner;
@property (retain, nonatomic) SISchemaUUID *gmsClientRequestIdentifier;
@property (nonatomic) BOOL hasGmsClientRequestIdentifier;
@property (retain, nonatomic) SISchemaUUID *executorTraceID;
@property (nonatomic) BOOL hasExecutorTraceID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteModelName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAccountType;
- (void)deleteConfigVersion;
- (void)deleteExecutorTraceID;
- (void)deleteExternalPartner;
- (void)deleteGmsClientRequestIdentifier;
- (void)deleteIsUserSignedIn;
- (void)deleteIsWebSearchUsed;
- (void)deleteModelLocation;
- (void)deleteModelParty;
- (void)deleteModelVersion;
- (void)deletePromptVersion;
- (void)deleteUseCase;
- (id)suppressMessageUnderConditions;

@end
