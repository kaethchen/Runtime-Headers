@class NSString, NSDate;

@interface BMAppleIDChildSetup : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
    BOOL _hasRaw_endDate;
    double _raw_endDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL isNewChildAccount;
@property (nonatomic) BOOL hasIsNewChildAccount;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL completedSetup;
@property (nonatomic) BOOL hasCompletedSetup;
@property (readonly, nonatomic) int lastViewedScreen;
@property (readonly, nonatomic) BOOL appUsage;
@property (nonatomic) BOOL hasAppUsage;
@property (readonly, nonatomic) BOOL askToBuy;
@property (nonatomic) BOOL hasAskToBuy;
@property (readonly, nonatomic) BOOL commSafety;
@property (nonatomic) BOOL hasCommSafety;
@property (readonly, nonatomic) BOOL screenDistance;
@property (nonatomic) BOOL hasScreenDistance;
@property (readonly, nonatomic) unsigned int age;
@property (nonatomic) BOOL hasAge;
@property (readonly, nonatomic) int flowType;
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
- (id)initWithIsNewChildAccount:(id)a0 startDate:(id)a1 endDate:(id)a2 completedSetup:(id)a3 lastViewedScreen:(int)a4 appUsage:(id)a5 askToBuy:(id)a6 commSafety:(id)a7 screenDistance:(id)a8 age:(id)a9 flowType:(int)a10;

@end
