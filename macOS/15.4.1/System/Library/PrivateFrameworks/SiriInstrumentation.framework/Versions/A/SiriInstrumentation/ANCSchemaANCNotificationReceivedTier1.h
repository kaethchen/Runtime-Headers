@class NSString, NSData, SISchemaUUID;

@interface ANCSchemaANCNotificationReceivedTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char isRedactedDueToOptOut : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL isRedactedDueToOptOut;
@property (nonatomic) BOOL hasIsRedactedDueToOptOut;
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
- (void)deleteAppBundleId;
- (void)deleteIsRedactedDueToOptOut;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
