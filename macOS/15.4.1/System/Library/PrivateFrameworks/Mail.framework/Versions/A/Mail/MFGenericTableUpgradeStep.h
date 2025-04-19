@interface MFGenericTableUpgradeStep : MFLibraryUpgradeStep {
    unsigned long long _targetVersion;
}

@property (readonly, nonatomic) Class upgradeStepClass;

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)targetVersion;
- (id)initWithDatabaseConnection:(id)a0 targetVersion:(unsigned long long)a1 upgradeStepClass:(Class)a2;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
