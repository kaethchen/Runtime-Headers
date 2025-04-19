@class NSArray;

@interface ASBContainerUpgradeScript : NSObject {
    NSArray *_actions;
}

+ (id)scriptToMigrateAutosaveDocuments:(id)a0 ofApplicationWithBundleId:(id)a1 error:(id *)a2;
+ (id)scriptToMigratePreferences:(id)a0 ofApplicationWithBundleId:(id)a1 error:(id *)a2;
+ (id)scriptWithActions:(id)a0;
+ (id)scriptWithContentsOfMigrationManifestAtURL:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateActionsUsingBlock:(id /* block */)a0;
- (id)initWithActions:(id)a0;
- (BOOL)runScriptWithContainer:(id)a0 ignoringActionFailures:(BOOL)a1 usingFileManager:(id)a2 error:(id *)a3;
- (id)scriptByAppendingScript:(id)a0;

@end
