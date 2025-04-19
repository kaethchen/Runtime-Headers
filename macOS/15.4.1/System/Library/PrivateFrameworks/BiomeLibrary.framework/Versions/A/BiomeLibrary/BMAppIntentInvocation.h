@class BMAppIntentInvocationActionOutput, NSString, NSUUID, NSArray, NSDate, NSData, BMAppIntentInvocationAction;

@interface BMAppIntentInvocation : BMEventBase <BMStoreData> {
    NSData *_raw_executionUUID;
    BOOL _hasRaw_executionDate;
    double _raw_executionDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) int source;
@property (readonly, nonatomic) NSUUID *executionUUID;
@property (readonly, nonatomic) NSDate *executionDate;
@property (readonly, nonatomic) BMAppIntentInvocationAction *action;
@property (readonly, nonatomic) BMAppIntentInvocationAction *resolvedAction;
@property (readonly, nonatomic) BMAppIntentInvocationActionOutput *actionOutput;
@property (readonly, nonatomic) NSArray *predictions;
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
- (id)_predictionsJSONArray;
- (id)initWithBundleID:(id)a0 source:(int)a1 executionUUID:(id)a2 executionDate:(id)a3 action:(id)a4 resolvedAction:(id)a5 actionOutput:(id)a6 predictions:(id)a7;

@end
