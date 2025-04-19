@class NSString, NSDate;

@interface BMWidgetsViewed : BMEventBase <BMStoreData> {
    BOOL _hasRaw_endDate;
    double _raw_endDate;
    BOOL _hasRaw_startDate;
    double _raw_startDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *budgetID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *extensionBundleID;
@property (readonly, nonatomic) BOOL inStack;
@property (nonatomic) BOOL hasInStack;
@property (readonly, nonatomic) long long pageID;
@property (nonatomic) BOOL hasPageID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double timeUntilExpiration;
@property (nonatomic) BOOL hasTimeUntilExpiration;
@property (readonly, nonatomic) NSString *viewID;
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
- (id)initWithBudgetID:(id)a0 bundleID:(id)a1 endDate:(id)a2 extensionBundleID:(id)a3 inStack:(id)a4 pageID:(id)a5 startDate:(id)a6 timeUntilExpiration:(id)a7 viewID:(id)a8;

@end
