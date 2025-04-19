@class NSString, NSData, NSObject, AppleTypeCRetimerIICFifo;
@protocol OS_os_log, OS_dispatch_semaphore;

@interface AppleTypeCRetimerUARPHardwareIDQuerier : NSObject <AppleTypeCRetimerIICFifoDelegate> {
    NSString *_name;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_semaphore> *_querySemaphore;
    AppleTypeCRetimerIICFifo *_fifo;
    struct uarpChipCallbacks { void /* function */ *fRestoreMsgRecv; void /* function */ *fRestoreDataRecv; } _uarpChipCallbacks;
    struct _UARPSiliconContext { id x0; void *x1; void *x2; struct uarpRestoreCallbacks { void /* function */ *x0; void /* function */ *x1; } x3; struct _uarpRestoreEndpoint *x4; void *x5; void *x6; struct uarpRestoreLayer4Callbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } x7; unsigned int x8; char *x9; char *x10; char *x11; char *x12; struct UARP4ccTag { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } x13; char *x14; char *x15; unsigned long long x16; void *x17; } *_uarpContext;
    unsigned int _boardID;
    unsigned int _chipID;
    unsigned long long _ecid;
    unsigned int _securityDomain;
    unsigned int _securityMode;
    unsigned int _productionMode;
    NSData *_nonce;
    unsigned int _chipRev;
    unsigned int _securityEpoch;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)setNonce:(id)a0;
- (void)setSecurityMode:(unsigned int)a0;
- (void)queryComplete;
- (void)setBoardID:(unsigned int)a0;
- (void)setChipID:(unsigned int)a0;
- (void)setProductionMode:(unsigned int)a0;
- (void)setSecurityDomain:(unsigned int)a0;
- (void)setUarpContext:(void *)a0;
- (id)queryHardwareID;
- (void)appleTypeCRetimerIICFifo:(id)a0 receivedData:(id)a1;
- (void)appleTypeCRetimerIICFifoTransferError:(id)a0 error:(id)a1;
- (BOOL)initUARPWithDeviceHandle:(id)a0 captureFileName:(id)a1;
- (id)initWithDeviceHandle:(id)a0 captureFileName:(id)a1;
- (void)setChipRev:(unsigned int)a0;
- (void)setECID:(unsigned long long)a0;
- (void)setSecurityEpoch:(unsigned int)a0;
- (void)setUarpChipCallbacks:(struct uarpChipCallbacks { void /* function */ *x0; void /* function */ *x1; } *)a0;

@end
