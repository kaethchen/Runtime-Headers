@class NSString;

@interface BMOasisAnalyticsRelocalizationSucceededType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int descriptorType;
@property (readonly, nonatomic) unsigned long long localizedSubmapId;
@property (nonatomic) BOOL hasLocalizedSubmapId;
@property (readonly, nonatomic) float timeToLocalizationInSecond;
@property (nonatomic) BOOL hasTimeToLocalizationInSecond;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithDescriptorType:(int)a0 localizedSubmapId:(id)a1 timeToLocalizationInSecond:(id)a2;

@end
