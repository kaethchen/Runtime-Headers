@class NSData;

@interface POMMESSchemaPOMMESProfileSliceResolutionRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char sliceLabel : 1; } _has;
}

@property (nonatomic) unsigned int sliceLabel;
@property (nonatomic) BOOL hasSliceLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSliceLabel;
- (id)suppressMessageUnderConditions;

@end
