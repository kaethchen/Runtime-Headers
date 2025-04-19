@class PS190Instance;
@protocol PS190UpdaterInstanceDelegate;

@interface PS190UpdaterInstance : NSObject <PS190RecoveryDeviceDelegate, PS190DeviceDelegate> {
    id<PS190UpdaterInstanceDelegate> _delegate;
    PS190Instance *_ps190Instance;
    BOOL _recoveryModeActive;
    BOOL _needsOTPProgramming;
    BOOL _startedFromRecoveryMode;
    unsigned int _loadToRAMPercentComplete;
}

@property (readonly) BOOL complete;
@property (readonly) unsigned int tag;
@property BOOL useLocalSigning;

- (id)description;
- (void).cxx_destruct;
- (id)queryHardwareID;
- (void)firmwareBlocksSent:(unsigned int)a0 blocksTotal:(unsigned int)a1;
- (id)findHandleAfterReset;
- (void)firmwareBytesSent:(unsigned int)a0 bytesTotal:(unsigned int)a1;
- (id)initWithInstance:(id)a0 tag:(unsigned int)a1 delegate:(id)a2;
- (BOOL)performUpdateForFirmwareFile:(id)a0 inputDict:(id)a1 skipSameVersion:(BOOL)a2;
- (BOOL)programOTPForDevice:(id)a0 withInputParameters:(id)a1;

@end
