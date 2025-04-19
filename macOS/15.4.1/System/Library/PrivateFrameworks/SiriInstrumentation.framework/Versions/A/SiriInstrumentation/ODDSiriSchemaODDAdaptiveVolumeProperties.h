@class NSData;

@interface ODDSiriSchemaODDAdaptiveVolumeProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAdaptiveVolumeEnabled : 1; unsigned char adaptiveVolume : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) BOOL isAdaptiveVolumeEnabled;
@property (nonatomic) BOOL hasIsAdaptiveVolumeEnabled;
@property (nonatomic) int adaptiveVolume;
@property (nonatomic) BOOL hasAdaptiveVolume;
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
- (void)deleteAdaptiveVolume;
- (void)deleteIsAdaptiveVolumeEnabled;
- (void)deleteIsPermanentOffsetEnabled;
- (void)deletePermanentOffsetFactor;
- (id)suppressMessageUnderConditions;

@end
