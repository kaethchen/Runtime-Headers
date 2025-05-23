@class BMLighthouseLedgerTrialIdentifiers, NSString, BMLighthouseLedgerMlruntimedEventScheduleStatus, BMLighthouseLedgerMlruntimedEventTaskEvent, NSDate;

@interface BMLighthouseLedgerMlruntimedEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventScheduleStatus *activityScheduleStatus;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskFetched;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskScheduled;
@property (readonly, nonatomic) BMLighthouseLedgerMlruntimedEventTaskEvent *taskCompleted;
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
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 activityScheduleStatus:(id)a3 taskFetched:(id)a4 taskScheduled:(id)a5 taskCompleted:(id)a6;

@end
