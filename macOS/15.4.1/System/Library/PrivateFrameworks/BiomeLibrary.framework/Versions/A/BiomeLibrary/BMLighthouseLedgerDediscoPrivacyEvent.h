@class BMLighthouseLedgerTrialIdentifiers, NSString, BMLighthouseLedgerDediscoPrivacyEventEventState, NSDate;

@interface BMLighthouseLedgerDediscoPrivacyEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) BMLighthouseLedgerDediscoPrivacyEventEventState *event;
@property (readonly, nonatomic) int aggregateFunction;
@property (readonly, nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) int count;
@property (nonatomic) BOOL hasCount;
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
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 eventIdentifier:(id)a3 event:(id)a4;
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 eventIdentifier:(id)a3 event:(id)a4 aggregateFunction:(int)a5 errorCode:(id)a6 count:(id)a7;

@end
