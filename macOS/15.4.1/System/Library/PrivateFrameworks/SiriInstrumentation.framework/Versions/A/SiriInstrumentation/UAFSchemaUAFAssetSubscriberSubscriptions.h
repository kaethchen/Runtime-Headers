@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSubscriberSubscriptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subscriberName;
@property (nonatomic) BOOL hasSubscriberName;
@property (copy, nonatomic) NSArray *subscriptions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addSubscriptions:(id)a0;
- (void)clearSubscriptions;
- (void)deleteSubscriberName;
- (void)deleteSubscriptions;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscriptionsCount;
- (id)suppressMessageUnderConditions;

@end
