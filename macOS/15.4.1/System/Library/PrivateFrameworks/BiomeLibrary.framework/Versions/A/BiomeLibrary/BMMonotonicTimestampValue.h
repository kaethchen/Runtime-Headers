@class NSString;

@interface BMMonotonicTimestampValue : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long suspendingNanosecondsSinceBoot;
@property (nonatomic) BOOL hasSuspendingNanosecondsSinceBoot;
@property (readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property (nonatomic) BOOL hasContinuousNanosecondsSinceBoot;
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
- (id)initWithSuspendingNanosecondsSinceBoot:(id)a0 continuousNanosecondsSinceBoot:(id)a1;

@end
