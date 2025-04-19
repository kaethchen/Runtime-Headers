@class NSString;

@interface BMSiriTaskAggregationDimensions : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int productArea;
@property (readonly, nonatomic) NSString *siriInputLocale;
@property (readonly, nonatomic) NSString *systemLocale;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *systemBuild;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithProductArea:(int)a0 siriInputLocale:(id)a1 systemLocale:(id)a2 countryCode:(id)a3 deviceType:(id)a4 systemBuild:(id)a5;

@end
