@class NSLock, NSMutableDictionary, NSThread, NSMutableArray, NSObject;
@protocol ILCConnectionDelegate;

@interface ILCConnection : ILCBaseConnection

@property int state;
@property (weak) NSObject<ILCConnectionDelegate> *delegate;
@property (retain) NSMutableDictionary *filenameToUUIDMap;
@property (retain) NSMutableDictionary *filehandleToUUIDMap;
@property (retain) NSMutableDictionary *UUIDToHandleMap;
@property (retain) NSMutableArray *pendingSysdiagnoseUUIDs;
@property (retain) NSMutableArray *successulSysdiagnoseFilenames;
@property (retain) NSMutableArray *failedSysdiagnoseFilenames;
@property (retain) NSThread *fileHandleMultiplexThread;
@property (retain) NSLock *fdLock;

- (void).cxx_destruct;
- (void)disconnect;
- (void)disconnectWithError:(id)a0;
- (void)successForUUID:(id)a0;
- (BOOL)writeFilename:(id)a0 withHandle:(id)a1 flags:(int)a2;
- (BOOL)beginFile:(id)a0 forFilename:(id)a1 flags:(int)a2 isSysdiagnose:(BOOL)a3;
- (void)errorForUUID:(id)a0;
- (void)fileHandleMultiplexer:(id)a0;
- (id)goodByeReasonToString:(int)a0;
- (void)handleCommands;
- (void)handleFileTypeError:(struct { struct { unsigned int x0; int x1; char x2[0]; } x0; unsigned char x1[16]; int x2; } *)a0;
- (void)handleGoAheadPacket;
- (void)handleGoodbye:(struct { struct { unsigned int x0; int x1; char x2[0]; } x0; int x1; } *)a0;
- (void)handleHandshakePacket;
- (void)handlePacket:(struct { unsigned int x0; int x1; char x2[0]; } *)a0;
- (void)handlePlayAudioQueue:(struct { struct { struct { unsigned int x0; int x1; char x2[0]; } x0; char x1[64]; int x2; } x0; char x1[1024]; } *)a0;
- (void)handleReboot:(struct { struct { struct { unsigned int x0; int x1; char x2[0]; } x0; char x1[64]; int x2; } x0; } *)a0;
- (void)handleSecurePacket:(struct { unsigned int x0; int x1; char x2[0]; } *)a0;
- (void)handleSysdiagnose:(struct { struct { struct { unsigned int x0; int x1; char x2[0]; } x0; char x1[64]; int x2; } x0; } *)a0;
- (id)initWithHostname:(id)a0 password:(id)a1 delegate:(id)a2;
- (void)sendData:(id)a0 forFileUUID:(id)a1;
- (void)sendEndFileForUUID:(id)a0;
- (BOOL)sendFile:(id)a0 flags:(int)a1 error:(id *)a2;
- (void)sendGoodbyeWithReason:(int)a0;
- (void)socketWorkThread;
- (void)updateFilesForUUID:(id)a0 didFail:(BOOL)a1;

@end
