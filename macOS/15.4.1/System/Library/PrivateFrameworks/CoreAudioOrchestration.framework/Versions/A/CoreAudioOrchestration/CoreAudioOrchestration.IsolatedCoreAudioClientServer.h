@interface CoreAudioOrchestration.IsolatedCoreAudioClientServer : NSObject

+ (int)StopIO;
+ (int)StartIO;
+ (int)InstallCallbackWithIoProc:(void /* function */ *)a0 clientData:(void *)a1;
+ (int)StartIOAtTimeWithHostTime:(unsigned long long)a0;
+ (int)UninstallCallback;

- (id)init;

@end
