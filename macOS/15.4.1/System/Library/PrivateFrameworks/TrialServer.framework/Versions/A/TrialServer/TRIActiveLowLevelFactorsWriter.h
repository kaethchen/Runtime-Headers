@class _PASXPCClientHelper;
@protocol TRIPaths;

@interface TRIActiveLowLevelFactorsWriter : NSObject {
    id<TRIPaths> _paths;
    _PASXPCClientHelper *_internalHelper;
}

- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)_constructPlistForExperiments:(id)a0;
- (BOOL)_remoteWriteExperimentData:(id)a0 error:(id *)a1;
- (void)writeExperiments:(id)a0;

@end
