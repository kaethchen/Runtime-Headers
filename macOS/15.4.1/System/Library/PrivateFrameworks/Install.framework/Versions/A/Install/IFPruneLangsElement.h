@interface IFPruneLangsElement : IFInstallQueueElement

+ (BOOL)canRunForPackage:(id)a0;

- (long long)run;
- (id)logDescription;
- (void)_pruneLanguagePaths:(id)a0 withPackageController:(id)a1;

@end
