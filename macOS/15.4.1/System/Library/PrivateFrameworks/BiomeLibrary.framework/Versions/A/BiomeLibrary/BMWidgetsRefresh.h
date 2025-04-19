@class NSString, NSDate;

@interface BMWidgetsRefresh : BMEventBase <BMStoreData> {
    BOOL _hasRaw_refreshDate;
    double _raw_refreshDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *budgetID;
@property (readonly, nonatomic) NSString *extensionBundleID;
@property (readonly, nonatomic) BOOL isDASInitiated;
@property (nonatomic) BOOL hasIsDASInitiated;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic) NSString *refreshReason;
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
- (id)initWithBudgetID:(id)a0 extensionBundleID:(id)a1 isDASInitiated:(id)a2 refreshDate:(id)a3 refreshReason:(id)a4;

@end
