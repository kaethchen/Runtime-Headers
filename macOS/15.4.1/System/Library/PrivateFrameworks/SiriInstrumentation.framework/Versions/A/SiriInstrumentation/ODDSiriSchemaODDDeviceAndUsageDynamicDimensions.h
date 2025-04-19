@class SISchemaISOLocale, NSData;

@interface ODDSiriSchemaODDDeviceAndUsageDynamicDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char viewInterface : 1; unsigned char audioInterface : 1; unsigned char appTaskType : 1; unsigned char taskAppBundleId : 1; } _has;
}

@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) int viewInterface;
@property (nonatomic) BOOL hasViewInterface;
@property (nonatomic) int audioInterface;
@property (nonatomic) BOOL hasAudioInterface;
@property (nonatomic) int appTaskType;
@property (nonatomic) BOOL hasAppTaskType;
@property (nonatomic) int taskAppBundleId;
@property (nonatomic) BOOL hasTaskAppBundleId;
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
- (void)deleteAppTaskType;
- (void)deleteAudioInterface;
- (void)deleteSiriInputLocale;
- (void)deleteTaskAppBundleId;
- (void)deleteViewInterface;
- (id)suppressMessageUnderConditions;

@end
