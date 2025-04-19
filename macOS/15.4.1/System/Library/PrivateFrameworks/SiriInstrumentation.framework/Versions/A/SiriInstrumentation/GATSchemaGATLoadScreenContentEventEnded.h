@class NSData;

@interface GATSchemaGATLoadScreenContentEventEnded : SISchemaInstrumentationMessage {
    struct { unsigned char originalMediaType : 1; unsigned char originalMediaSizeInKBs : 1; } _has;
}

@property (nonatomic) int originalMediaType;
@property (nonatomic) BOOL hasOriginalMediaType;
@property (nonatomic) double originalMediaSizeInKBs;
@property (nonatomic) BOOL hasOriginalMediaSizeInKBs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOriginalMediaSizeInKBs;
- (void)deleteOriginalMediaType;
- (id)suppressMessageUnderConditions;

@end
