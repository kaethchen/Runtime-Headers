@class NSData;

@interface PRSiriSchemaPRJointResolverCallStarted : SISchemaInstrumentationMessage {
    struct { unsigned char callType : 1; } _has;
}

@property (nonatomic) int callType;
@property (nonatomic) BOOL hasCallType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCallType;
- (id)suppressMessageUnderConditions;

@end
