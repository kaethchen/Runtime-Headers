@class NSProgress, NSString;

@interface PLLibraryServicesOperation : NSBlockOperation

@property (class, nonatomic) BOOL shouldSuppressLogging;

@property (nonatomic) long long requiredState;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long progressPercentOfTotal;
@property (copy) NSString *logPrefix;
@property (readonly, copy, nonatomic) NSString *statusDescription;

+ (id)operationWithName:(id)a0 libraryServicesManager:(id)a1 requiredState:(long long)a2 parentProgress:(id)a3 executionBlock:(id /* block */)a4;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)_runOperationBlock:(id /* block */)a0;
- (void)setExecutionBlockFromOperationBlock:(id /* block */)a0;

@end
