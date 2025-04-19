@class FBProcessCPUStatistics;

@interface FBApplicationProcess : FBProcess {
    FBProcessCPUStatistics *_cpuStatistics;
}

@property (nonatomic, getter=isRecordingAudio) BOOL recordingAudio;
@property (nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio;
@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory;
@property (readonly, nonatomic) double elapsedCPUTime;

+ (id)_internalDebugEnvironmentVariables;

- (void).cxx_destruct;
- (void)_bootstrapDidComplete;
- (id)_createBootstrapContext;
- (void)_finishInit;
- (BOOL)isApplicationProcess;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2 completion:(id /* block */)a3;

@end
