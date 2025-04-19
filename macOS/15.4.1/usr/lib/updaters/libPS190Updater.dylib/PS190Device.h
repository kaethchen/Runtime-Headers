@class NSObject, PS190PacketDumper;
@protocol OS_os_log, PS190DeviceHandle, PS190DeviceDelegate;

@interface PS190Device : NSObject {
    id<PS190DeviceHandle> _deviceHandle;
    NSObject<OS_os_log> *_log;
}

@property (weak) id<PS190DeviceDelegate> delegate;
@property (readonly) BOOL bootFailureDetected;
@property (readonly) unsigned char bootStatus;
@property (readonly) BOOL hostAccessEnabled;
@property (retain) PS190PacketDumper *dumper;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0;
- (BOOL)sendCommand:(id)a0;
- (id)readData:(unsigned long long)a0;
- (unsigned int)writeBytes:(const char *)a0 length:(unsigned int)a1;
- (BOOL)startPacketDumperWithFileName:(id)a0;
- (BOOL)commitWithReset;
- (id)queryBootStatus;
- (id)queryInstanceID;
- (id)otpQueryBoardID;
- (BOOL)updateWithFile:(id)a0;
- (BOOL)checkForApplicationMode;
- (BOOL)checkForBootFailure;
- (BOOL)checkForRecoveryMode;
- (BOOL)commitWithoutReset;
- (BOOL)fillInCommandRegistersForCommand:(id)a0;
- (id)otpQueryCPROFuse;
- (id)otpQuerySDOMFuse;
- (BOOL)otpWriteBoardID:(unsigned int)a0;
- (BOOL)otpWriteProductionMode:(unsigned char)a0;
- (BOOL)otpWriteSecurityDomain:(unsigned char)a0;
- (id)queryAppFirmwareVersion;
- (id)queryBoardID;
- (id)queryBootNonceHash;
- (id)queryBootloaderVersion;
- (id)queryCPROFuse;
- (id)queryCRC32ForBlockStartNumber:(unsigned int)a0 endNumber:(unsigned int)a1;
- (id)queryCSECFuse;
- (id)queryChipID;
- (id)queryDBGDFuse;
- (id)queryECID;
- (id)queryEpoch;
- (id)queryHardwareIDIncludingNonce:(BOOL)a0;
- (BOOL)queryHardwareRevision:(char *)a0;
- (id)queryOTPSerialNumber;
- (id)queryRHKPFuse;
- (id)querySDOMFuse;
- (id)querySiliconID;
- (BOOL)readCommandStatus:(char *)a0;
- (BOOL)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (BOOL)readRegisterAddressNoErrorLog:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (void)resetToAppLoad;
- (void)resetToRecoveryMode;
- (BOOL)sendCommandWithData:(id)a0;
- (id)sendCommandWithDataResponse:(id)a0;
- (BOOL)sendCommandWithoutData:(id)a0;
- (void)setBootErrorStatus:(unsigned char)a0;
- (BOOL)submitCommandForProcessing:(id)a0;
- (BOOL)submitDataForProcessing:(id)a0;
- (unsigned char)waitForCommandStatusNotBusy;
- (BOOL)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;
- (BOOL)writeRegisterAddress:(unsigned int)a0 data:(id)a1;

@end
