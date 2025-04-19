@class NSData, PNRProvisionalSagePnREvent;

@interface PNRProvisionalSagePnRWrapper : SISchemaTopLevelUnionType

@property (retain, nonatomic) PNRProvisionalSagePnREvent *sagePnR;
@property (nonatomic) BOOL hasSagePnR;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEventtype;

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
- (void)deleteSagePnR;

@end
