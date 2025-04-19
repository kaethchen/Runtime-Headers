@class PS190PacketDumper, NSData, NSObject, NSNumber;
@protocol OS_os_log, PS190DeviceHandle, PS190RecoveryDeviceDelegate;

@interface PS190RecoveryDevice : NSObject {
    id<PS190DeviceHandle> _handle;
    NSObject<OS_os_log> *_log;
    BOOL _infoQueryComplete;
    unsigned char _epoch;
    unsigned char _securityDomain;
    BOOL _securityDomainValid;
    NSNumber *_productionMode;
    BOOL _securityMode;
    BOOL _debugDisable;
    BOOL _realHDCPKeysPresent;
    NSNumber *_boardID;
    unsigned int _chipID;
    unsigned long long _ecid;
    NSData *_nonce;
    unsigned int _bytesTransferred;
    unsigned int _bytesToTransfer;
}

@property (weak) id<PS190RecoveryDeviceDelegate> delegate;
@property (retain) PS190PacketDumper *dumper;

- (void).cxx_destruct;
- (BOOL)writeFile:(id)a0;
- (id)initWithHandle:(id)a0;
- (id)queryHardwareID;
- (BOOL)checkFieldNamed:(const char *)a0 programmed:(BOOL)a1 valid:(BOOL)a2;
- (BOOL)enableSRAMAccess;
- (BOOL)loadFile:(id)a0;
- (BOOL)queryBoardID;
- (BOOL)queryBootNonceHash:(char *)a0;
- (BOOL)queryBootNonceHashLSB:(char *)a0;
- (BOOL)queryBootNonceHashMSB:(char *)a0;
- (BOOL)queryChipEpoch;
- (BOOL)queryChipID;
- (BOOL)queryChipInfo;
- (BOOL)queryECID;
- (BOOL)queryFlags:(char *)a0;
- (id)queryOTPProgrammedFields;
- (id)queryOTPValidFields;
- (BOOL)querySecurityDomain;
- (BOOL)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (BOOL)resetToAppMode;
- (BOOL)resetToMemoryImage;
- (BOOL)resetToMode:(unsigned char)a0;
- (BOOL)resetToRecoveryMode;
- (BOOL)waitForHostAccessEnable;
- (BOOL)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;
- (BOOL)writeRequest:(unsigned char)a0;
- (BOOL)writeToSRAMAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;

@end
