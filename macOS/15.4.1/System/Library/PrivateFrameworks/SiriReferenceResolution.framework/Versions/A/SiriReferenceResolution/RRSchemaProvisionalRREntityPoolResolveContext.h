@class RRSchemaProvisionalRREntityPoolResolveEnded, RRSchemaProvisionalRREntityPoolResolveStarted, NSData, RRSchemaProvisionalRREntityPoolResolveFailed;

@interface RRSchemaProvisionalRREntityPoolResolveContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
