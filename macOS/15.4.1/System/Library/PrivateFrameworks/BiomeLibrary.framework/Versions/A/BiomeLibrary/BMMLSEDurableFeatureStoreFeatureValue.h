@class NSString, BMMLSEDurableFeatureStoreFeatureValueHistogram;

@interface BMMLSEDurableFeatureStoreFeatureValue : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int intValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) BMMLSEDurableFeatureStoreFeatureValueHistogram *histogramValue;
@property (readonly, nonatomic) int missingReason;
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
- (id)initWithIntValue:(id)a0 doubleValue:(id)a1 stringValue:(id)a2 boolValue:(id)a3 histogramValue:(id)a4;
- (id)initWithIntValue:(id)a0 doubleValue:(id)a1 stringValue:(id)a2 boolValue:(id)a3 histogramValue:(id)a4 missingReason:(int)a5;

@end
