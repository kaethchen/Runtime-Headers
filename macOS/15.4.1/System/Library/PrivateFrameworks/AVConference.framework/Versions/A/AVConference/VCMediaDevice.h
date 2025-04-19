@class NSString;

@interface VCMediaDevice : VCObject <VCMediaDeviceProtocol, VCMediaDeviceDelegate> {
    unsigned int _state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)run;
- (id)resume;
- (id)pause;
- (id)start;
- (id)stop;
- (id)onResume;
- (id)onStart;
- (id)onPause;
- (BOOL)autoRunOnStart;
- (BOOL)canEnterState:(unsigned int)a0;
- (id)onRun;
- (id)onStop;
- (id)runInternal;
- (id)stateStringForState:(unsigned int)a0;

@end
