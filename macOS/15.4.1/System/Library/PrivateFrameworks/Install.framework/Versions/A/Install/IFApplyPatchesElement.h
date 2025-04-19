@class NSLock;

@interface IFApplyPatchesElement : IFInstallQueueElement <IFPatchProgress> {
    unsigned int _numberOfPatchFiles;
    int _installKey;
    int _patchStatus;
    BOOL _patchIsInProgress;
    NSLock *_callbackLock;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (void)_updateSha1OfPatchedFile:(id)a0;
- (long long)getNumberOfPatchFilesFromPlan:(id)a0;
- (id)initWithInstallElement:(id)a0 installKey:(int)a1;
- (oneway void)noteCurrentFile:(bycopy id)a0 totalCount:(unsigned int)a1;
- (void)patchCompletedWithStatus:(int)a0;

@end
