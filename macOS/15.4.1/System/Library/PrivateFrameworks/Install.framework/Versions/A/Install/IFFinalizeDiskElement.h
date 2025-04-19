@class IFDiskObject;

@interface IFFinalizeDiskElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    int _installKey;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (void)_runWithManager:(id)a0;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1;
- (BOOL)runAfterError;

@end
