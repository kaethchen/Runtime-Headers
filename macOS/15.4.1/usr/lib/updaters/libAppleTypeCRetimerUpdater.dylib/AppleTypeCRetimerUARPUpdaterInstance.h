@class AppleTypeCRetimerIICDeviceHandle, NSString, AppleTypeCRetimerIICFifo, AppleTypeCRetimerPanicStatus, AppleTypeCRetimerDFU, NSObject, ACE;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, AppleTypeCRetimerUARPUpdaterInstanceDelegate;

@interface AppleTypeCRetimerUARPUpdaterInstance : NSObject <AppleTypeCRetimerDFUDelegate, AppleTypeCRetimerIICFifoDelegate> {
    id<AppleTypeCRetimerUARPUpdaterInstanceDelegate> _delegate;
    ACE *_ace;
    AppleTypeCRetimerIICDeviceHandle *_deviceHandle;
    AppleTypeCRetimerDFU *_dfuUpdater;
    unsigned int _nextDFUFirmwareProgressReportPercentThreshold;
    unsigned int _nextDFUManifestProgressReportPercentThreshold;
    unsigned int _nextUpdateProgressReportPercentThreshold;
    BOOL _powerForced;
    BOOL _dfuCheckHasRun;
    BOOL _stageSuccess;
    BOOL _applySuccess;
    struct uarpChipCallbacks { void /* function */ *fRestoreMsgRecv; void /* function */ *fRestoreDataRecv; } _uarpChipCallbacks;
    struct _UARPSiliconContext { id x0; void *x1; void *x2; struct uarpRestoreCallbacks { void /* function */ *x0; void /* function */ *x1; } x3; struct _uarpRestoreEndpoint *x4; void *x5; void *x6; struct uarpRestoreLayer4Callbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } x7; unsigned int x8; char *x9; char *x10; char *x11; char *x12; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x13; char *x14; char *x15; unsigned long long x16; void *x17; } *_uarpContext;
    AppleTypeCRetimerIICFifo *_fifo;
    NSObject<OS_dispatch_queue> *_uarpQueue;
    NSObject<OS_dispatch_semaphore> *_uarpSemaphore;
    BOOL _uarpInitialized;
    AppleTypeCRetimerPanicStatus *_panicStatus;
}

@property (readonly) unsigned char routerID;
@property (readonly) BOOL useLocalSigning;
@property (readonly) NSString *name;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (BOOL)applyFirmware;
- (BOOL)initUARP;
- (void)setUarpContext:(void *)a0;
- (id)queryHardwareID;
- (BOOL)allocateACE;
- (BOOL)allocateUpdaterDFU;
- (void)appleTypeCRetimerIICFifo:(id)a0 receivedData:(id)a1;
- (void)appleTypeCRetimerIICFifoTransferError:(id)a0 error:(id)a1;
- (BOOL)checkForVersionMatch:(BOOL *)a0 withBver:(id)a1;
- (id)createChipSpecificSuperBinaryDataForStockSuperBinary:(id)a0 manifestData:(id)a1 apHardwareID:(id)a2 debugFlags:(unsigned long long)a3;
- (void)dfuImageBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (void)firmwareApplyCompleteWithStatus:(unsigned int)a0 flags:(unsigned int)a1;
- (void)firmwareBytesTransferred:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (void)firmwareStagingCompleteWithStatus:(unsigned int)a0 reason:(unsigned int)a1;
- (id)generateManifestForFTAB:(id)a0 hardwareID:(id)a1 apParameters:(id)a2;
- (id)initWithRouterID:(unsigned char)a0 delegate:(id)a1 forcePower:(BOOL)a2;
- (void)manifestBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (BOOL)performDfuUpdateForSuperBinary:(id)a0 withManifestData:(id)a1;
- (BOOL)performUpdateForSuperBinaryData:(id)a0 manifestData:(id)a1 apHardwareID:(id)a2 skipSameVersion:(BOOL)a3 debugFlags:(unsigned long long)a4 bver:(id)a5;
- (BOOL)printVersions;
- (id)queryPanicStatus:(id *)a0;
- (void)setUarpChipCallbacks:(struct uarpChipCallbacks { void /* function */ *x0; void /* function */ *x1; } *)a0;
- (BOOL)startAppModeUpdateForSuperBinaryData:(id)a0;

@end
