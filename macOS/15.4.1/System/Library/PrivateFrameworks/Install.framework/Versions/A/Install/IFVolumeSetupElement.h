@class IFDiskObject;

@interface IFVolumeSetupElement : IFInstallQueueElement {
    IFDiskObject *_targetVolume;
    IFDiskObject *_sourceVolume;
    BOOL _willInitializeTarget;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (id)initWithTargetVolume:(id)a0 sourceVolume:(id)a1 willInitializeTarget:(BOOL)a2;

@end
