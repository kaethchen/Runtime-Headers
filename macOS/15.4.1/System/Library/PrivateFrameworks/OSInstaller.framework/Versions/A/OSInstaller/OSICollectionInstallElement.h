@class NSArray, OSInstallLegacyOptions;

@interface OSICollectionInstallElement : OSIInstallQueueElement

@property (retain) NSArray *relativePackagePaths;
@property (retain) OSInstallLegacyOptions *installOptions;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 relativePackagePaths:(id)a1;

@end
