@class NSData;

@interface ASRSchemaASRAppLanguageModelLoadFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char loadTimeInNs : 1; unsigned char foregroundCheckTimeInNs : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned long long loadTimeInNs;
@property (nonatomic) BOOL hasLoadTimeInNs;
@property (nonatomic) unsigned long long foregroundCheckTimeInNs;
@property (nonatomic) BOOL hasForegroundCheckTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteForegroundCheckTimeInNs;
- (void)deleteLoadTimeInNs;
- (id)suppressMessageUnderConditions;

@end
