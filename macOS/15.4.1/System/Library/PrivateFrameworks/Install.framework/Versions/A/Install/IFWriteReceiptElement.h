@class IFInstallPlan, IFDiskObject;

@interface IFWriteReceiptElement : IFTaskElement {
    IFDiskObject *_targetVolume;
    IFInstallPlan *_installPlan;
    BOOL _creatingFinal;
    BOOL _elementIsRunningInSessionQueueContext;
}

- (void)dealloc;
- (id)description;
- (long long)run;
- (id)logDescription;
- (BOOL)_runnerCreateReceiptDirectoriesAt:(id)a0;
- (id)initWithTargetVolume:(id)a0 installKey:(int)a1 stateDelegate:(id)a2 packageController:(id)a3;
- (id)initWithTargetVolume:(id)a0 installKey:(int)a1 stateDelegate:(id)a2 packageController:(id)a3 creatingFinal:(BOOL)a4;

@end
