@class RRSchemaProvisionalRRUsoGraphTier1, RRSchemaProvisionalPullerContext, NSData, RRSchemaProvisionalRREntityPoolResolveContext, RRSchemaProvisionalRRClientEventMetadata, RRSchemaProvisionalRREntityPoolReturned;

@interface RRSchemaProvisionalRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaProvisionalRRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RRSchemaProvisionalPullerContext *pullerContext;
@property (nonatomic) BOOL hasPullerContext;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolReturned *entityPoolReturned;
@property (nonatomic) BOOL hasEntityPoolReturned;
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic) BOOL hasEntityPoolResolveContext;
@property (retain, nonatomic) RRSchemaProvisionalRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic) BOOL hasRrUsoGraphTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
