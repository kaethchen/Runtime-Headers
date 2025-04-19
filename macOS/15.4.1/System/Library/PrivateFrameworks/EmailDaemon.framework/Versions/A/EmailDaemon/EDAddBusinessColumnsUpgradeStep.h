@class NSString;

@interface EDAddBusinessColumnsUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)_businessesTableSchema;
+ (BOOL)runWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)runWithConnection:(id)a0 protectedIndexInitialized:(BOOL)a1 protectedDatabaseName:(id)a2;


@end
