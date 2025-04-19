@class NSData;

@interface RTSSchemaRTSAccelerationData : SISchemaInstrumentationMessage {
    struct { unsigned char xAcceleration : 1; unsigned char yAcceleration : 1; unsigned char zAcceleration : 1; } _has;
}

@property (nonatomic) double xAcceleration;
@property (nonatomic) BOOL hasXAcceleration;
@property (nonatomic) double yAcceleration;
@property (nonatomic) BOOL hasYAcceleration;
@property (nonatomic) double zAcceleration;
@property (nonatomic) BOOL hasZAcceleration;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteXAcceleration;
- (void)deleteYAcceleration;
- (void)deleteZAcceleration;
- (id)suppressMessageUnderConditions;

@end
