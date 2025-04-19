@class BMLighthouseLedgerTrialIdentifiers, NSString, NSDate, BMLighthouseLedgerLighthousePluginEventEventStatus;

@interface BMLighthouseLedgerLighthousePluginEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL usePrivateUpload;
@property (nonatomic) BOOL hasUsePrivateUpload;
@property (readonly, nonatomic) BMLighthouseLedgerLighthousePluginEventEventStatus *performTaskStatus;
@property (readonly, nonatomic) BMLighthouseLedgerLighthousePluginEventEventStatus *performTrialTaskStatus;
@property (readonly, nonatomic) BMLighthouseLedgerLighthousePluginEventEventStatus *stop;
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
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 performTaskStatus:(id)a3 performTrialTaskStatus:(id)a4 stop:(id)a5;
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 usePrivateUpload:(id)a3 performTaskStatus:(id)a4 performTrialTaskStatus:(id)a5 stop:(id)a6;

@end
