@class NSString, NSData, SISchemaUUID;

@interface UAFSchemaUAFDeviceMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char programCode : 1; unsigned char inputLocale : 1; unsigned char nanoSecondsSinceLastBoot : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *deviceId;
@property (nonatomic) BOOL hasDeviceId;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) int programCode;
@property (nonatomic) BOOL hasProgramCode;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) int inputLocale;
@property (nonatomic) BOOL hasInputLocale;
@property (nonatomic) unsigned long long nanoSecondsSinceLastBoot;
@property (nonatomic) BOOL hasNanoSecondsSinceLastBoot;
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
- (void)deleteDeviceId;
- (void)deleteDeviceType;
- (void)deleteInputLocale;
- (void)deleteNanoSecondsSinceLastBoot;
- (void)deleteProgramCode;
- (void)deleteSystemBuild;
- (id)suppressMessageUnderConditions;

@end
