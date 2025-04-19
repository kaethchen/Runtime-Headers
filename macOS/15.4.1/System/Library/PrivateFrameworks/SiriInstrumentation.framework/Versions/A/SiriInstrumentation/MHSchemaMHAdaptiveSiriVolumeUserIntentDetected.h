@class NSData;

@interface MHSchemaMHAdaptiveSiriVolumeUserIntentDetected : SISchemaInstrumentationMessage {
    struct { unsigned char userIntentType : 1; unsigned char userIntentVolume : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) int userIntentType;
@property (nonatomic) BOOL hasUserIntentType;
@property (nonatomic) float userIntentVolume;
@property (nonatomic) BOOL hasUserIntentVolume;
@property (nonatomic) BOOL isPermanentOffsetEnabled;
@property (nonatomic) BOOL hasIsPermanentOffsetEnabled;
@property (nonatomic) float permanentOffsetFactor;
@property (nonatomic) BOOL hasPermanentOffsetFactor;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deletePermanentOffsetFactor;
- (void)deleteUserIntentType;
- (void)deleteUserIntentVolume;
- (id)suppressMessageUnderConditions;

@end
