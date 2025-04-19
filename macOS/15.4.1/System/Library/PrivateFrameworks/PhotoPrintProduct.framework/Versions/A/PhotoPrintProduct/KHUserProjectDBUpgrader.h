@class NSString;

@interface KHUserProjectDBUpgrader : KHDBIncrementalUpgrader {
    NSString *_name;
}

+ (void)writeDataModelVersionInDir:(id)a0;

- (void)dealloc;
- (void)setDatabaseName:(id)a0;
- (void)incrementalDataUpgradeForDatabase:(id)a0;
- (BOOL)incrementalSchemaUpgrade;
- (void)readVersionNumbers;
- (void)writeDataModelVersion;

@end
