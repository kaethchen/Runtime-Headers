@class NSData;

@interface MHSchemaMHEndpointDelayContext : SISchemaInstrumentationMessage {
    struct { unsigned char speakingStartInNs : 1; unsigned char speakingEndInNs : 1; unsigned char endpointDelayInNs : 1; unsigned char endpointModelDelayInNs : 1; unsigned char endpointDelayInNsV2 : 1; } _has;
}

@property (nonatomic) unsigned long long speakingStartInNs;
@property (nonatomic) BOOL hasSpeakingStartInNs;
@property (nonatomic) unsigned long long speakingEndInNs;
@property (nonatomic) BOOL hasSpeakingEndInNs;
@property (nonatomic) unsigned long long endpointDelayInNs;
@property (nonatomic) BOOL hasEndpointDelayInNs;
@property (nonatomic) unsigned long long endpointModelDelayInNs;
@property (nonatomic) BOOL hasEndpointModelDelayInNs;
@property (nonatomic) unsigned long long endpointDelayInNsV2;
@property (nonatomic) BOOL hasEndpointDelayInNsV2;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointDelayInNs;
- (void)deleteEndpointDelayInNsV2;
- (void)deleteEndpointModelDelayInNs;
- (void)deleteSpeakingEndInNs;
- (void)deleteSpeakingStartInNs;
- (id)suppressMessageUnderConditions;

@end
