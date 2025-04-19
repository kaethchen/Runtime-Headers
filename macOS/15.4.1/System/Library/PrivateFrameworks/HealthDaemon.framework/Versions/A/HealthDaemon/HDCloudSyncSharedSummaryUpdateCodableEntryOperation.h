@class NSString, NSArray, HDSynchronousTaskGroup;

@interface HDCloudSyncSharedSummaryUpdateCodableEntryOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSArray *_updatedLocalEntries;
    HDSynchronousTaskGroup *_taskGroup;
    BOOL _isActive;
    BOOL _shouldResolve;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)_filterEntries:(id)a0 active:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 updatedLocalEntries:(id)a1 isActive:(BOOL)a2 shouldResolveCNContact:(BOOL)a3;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
