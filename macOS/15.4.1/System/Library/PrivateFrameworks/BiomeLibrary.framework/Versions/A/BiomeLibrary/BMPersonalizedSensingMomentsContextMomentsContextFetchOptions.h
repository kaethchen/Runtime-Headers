@class NSString;

@interface BMPersonalizedSensingMomentsContextMomentsContextFetchOptions : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int contextFormat;
@property (nonatomic) BOOL hasContextFormat;
@property (readonly, nonatomic) unsigned int contextRetrieval;
@property (nonatomic) BOOL hasContextRetrieval;
@property (readonly, nonatomic) unsigned int contextCount;
@property (nonatomic) BOOL hasContextCount;
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
- (id)initWithContextFormat:(id)a0 contextRetrieval:(id)a1 contextCount:(id)a2;

@end
