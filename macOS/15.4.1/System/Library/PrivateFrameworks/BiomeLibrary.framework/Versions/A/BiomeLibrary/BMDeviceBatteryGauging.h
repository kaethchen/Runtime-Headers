@class NSString;

@interface BMDeviceBatteryGauging : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int updateType;
@property (readonly, nonatomic) int qmaxState;
@property (readonly, nonatomic) int daysSinceQMax;
@property (nonatomic) BOOL hasDaysSinceQMax;
@property (readonly, nonatomic) int ocvState;
@property (readonly, nonatomic) int daysSinceOCV;
@property (nonatomic) BOOL hasDaysSinceOCV;
@property (readonly, nonatomic) int fullChargeState;
@property (readonly, nonatomic) int daysSinceFullChargeAttempt;
@property (nonatomic) BOOL hasDaysSinceFullChargeAttempt;
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
- (id)initWithUpdateType:(int)a0 qmaxState:(int)a1 daysSinceQMax:(id)a2 ocvState:(int)a3 daysSinceOCV:(id)a4 fullChargeState:(int)a5 daysSinceFullChargeAttempt:(id)a6;
- (id)initByReadFrom:(id)a0;

@end
