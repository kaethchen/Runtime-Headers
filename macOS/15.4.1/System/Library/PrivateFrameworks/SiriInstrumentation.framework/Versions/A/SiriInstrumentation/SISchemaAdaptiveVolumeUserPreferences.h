@class NSData;

@interface SISchemaAdaptiveVolumeUserPreferences : SISchemaInstrumentationMessage {
    struct { unsigned char mostRecentIntent : 1; unsigned char isPermanentOffsetEnabled : 1; unsigned char permanentOffsetFactor : 1; } _has;
}

@property (nonatomic) int mostRecentIntent;
@property (nonatomic) BOOL hasMostRecentIntent;
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
- (void)deleteMostRecentIntent;
- (void)deletePermanentOffsetFactor;
- (id)suppressMessageUnderConditions;

@end
