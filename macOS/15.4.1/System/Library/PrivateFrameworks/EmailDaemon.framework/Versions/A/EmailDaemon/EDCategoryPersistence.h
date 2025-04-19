@class NSObject, EFLocked, NSString, EDCategoryCoreAnalyticsLogger, EDPersistenceDatabase;
@protocol OS_os_log, EDCategoryChangeHookResponder;

@interface EDCategoryPersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) id<EDCategoryChangeHookResponder> hookResponder;
@property (retain, nonatomic) EDCategoryCoreAnalyticsLogger *analyticsLogger;
@property (retain, nonatomic) EFLocked *cachedCurrentCategorizationVersion;
@property (readonly) long long currentCategorizationVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addCategoryColumnsToMessagesSelectComponent:(id)a0 globalMessagesSelectComponent:(id)a1 businessAddressesSelectComponent:(id)a2;
+ (id)categoryForResultRow:(id)a0;
+ (void)initializeCategorizationVersion:(id)a0;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 hookResponder:(id)a1;
- (void)_initializeCategorizationVersion;
- (void)changeHighImpactType:(unsigned long long)a0 messages:(id)a1;
- (void)incrementCategorizationVersion;
- (id)modelAnalyticsForMessage:(long long)a0;
- (BOOL)persistCategorizationResult:(id)a0 forGlobalID:(long long)a1 categorizationVersion:(long long)a2 connection:(id)a3;
- (BOOL)persistCategorizationResultMap:(id)a0 userInitiated:(BOOL)a1;
- (void)prepareToPersistCategorizationResultMap:(id)a0;
- (id)requestProtectedDatabaseBackgroundProcessingForDuration:(double)a0 error:(id *)a1;

@end
