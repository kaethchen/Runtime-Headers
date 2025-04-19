@class NSData;

@interface ODDSiriSchemaODDDeviceSegment : SISchemaInstrumentationMessage {
    struct { unsigned char segmentType : 1; unsigned char segmentDataAvailabilityState : 1; } _has;
}

@property (nonatomic) int segmentType;
@property (nonatomic) BOOL hasSegmentType;
@property (nonatomic) int segmentDataAvailabilityState;
@property (nonatomic) BOOL hasSegmentDataAvailabilityState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSegmentDataAvailabilityState;
- (void)deleteSegmentType;
- (id)suppressMessageUnderConditions;

@end
