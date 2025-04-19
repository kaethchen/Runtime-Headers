@class NSString;

@interface EDBusinessCommonPrefixGroupingUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)_commonDomains;
+ (BOOL)_deleteExistingBusinessesWithConnection:(id)a0 error:(id *)a1;
+ (id)_getGroupableAndUngroupableAddresses:(id *)a0 connection:(id)a1 error:(id *)a2;
+ (id)_groupAddresses:(id)a0;
+ (BOOL)_persistBusinesses:(id)a0 connection:(id)a1 error:(id *)a2;
+ (void)_resetGroupingDefault;
+ (BOOL)_shouldUseSimpleAddressForHighLevelDomain:(id)a0 displayName:(id)a1;
+ (BOOL)runWithConnection:(id)a0 error:(id *)a1;


@end
