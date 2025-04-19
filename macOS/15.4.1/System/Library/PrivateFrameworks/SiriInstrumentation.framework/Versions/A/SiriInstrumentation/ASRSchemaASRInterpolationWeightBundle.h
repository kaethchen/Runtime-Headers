@class NSArray, NSData;

@interface ASRSchemaASRInterpolationWeightBundle : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) BOOL hasEndTimeInNs;
@property (copy, nonatomic) NSArray *weights;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (float)weightsAtIndex:(unsigned long long)a0;
- (void)addWeights:(float)a0;
- (void)clearWeights;
- (void)deleteEndTimeInNs;
- (void)deleteStartTimeInNs;
- (void)deleteWeights;
- (id)suppressMessageUnderConditions;
- (unsigned long long)weightsCount;

@end
