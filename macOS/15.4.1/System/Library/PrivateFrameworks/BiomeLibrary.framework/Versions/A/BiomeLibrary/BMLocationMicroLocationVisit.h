@class NSString, NSArray;

@interface BMLocationMicroLocationVisit : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *maxProbabilityMicroLocationIdentifier;
@property (readonly, nonatomic) double maxProbability;
@property (nonatomic) BOOL hasMaxProbability;
@property (readonly, nonatomic) NSArray *probabilityVector;
@property (readonly, nonatomic) BOOL isStable;
@property (nonatomic) BOOL hasIsStable;
@property (readonly, nonatomic) NSArray *numDevicesVector;
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
- (id)_numDevicesVectorJSONArray;
- (id)_probabilityVectorJSONArray;
- (id)initWithDomain:(id)a0 maxProbabilityMicroLocationIdentifier:(id)a1 maxProbability:(id)a2 probabilityVector:(id)a3 isStable:(id)a4 numDevicesVector:(id)a5;

@end
