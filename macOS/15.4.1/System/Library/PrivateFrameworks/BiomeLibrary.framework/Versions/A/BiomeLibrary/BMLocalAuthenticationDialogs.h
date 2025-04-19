@class NSString, NSArray;

@interface BMLocalAuthenticationDialogs : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *dialogID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned int timeSinceUpdate;
@property (nonatomic) BOOL hasTimeSinceUpdate;
@property (readonly, nonatomic) NSArray *mechanisms;
@property (readonly, nonatomic) int successfulMechanism;
@property (readonly, nonatomic) NSArray *failedMechanisms;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) int failingAction;
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
- (id)_actionsJSONArray;
- (id)_failedMechanismsJSONArray;
- (id)_mechanismsJSONArray;
- (id)initWithDialogID:(id)a0 bundleID:(id)a1 timeSinceUpdate:(id)a2 mechanisms:(id)a3 successfulMechanism:(int)a4 failedMechanisms:(id)a5 actions:(id)a6 failingAction:(int)a7;

@end
