@class PS190BloodhoundPacketDumper;

@interface PS190PacketDumper : NSObject {
    PS190BloodhoundPacketDumper *_dumper;
}

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;
- (void)dumpCommand:(id)a0;
- (void)dumpBootStatus:(id)a0;
- (void)dumpAppFirmwareVersion:(id)a0;
- (void)dumpBoardID:(id)a0;
- (void)dumpBootNonceHash:(id)a0;
- (void)dumpBootloaderVersion:(id)a0;
- (void)dumpCMDIFPacket:(id)a0 cmdifType:(unsigned short)a1;
- (void)dumpCPROFuse:(id)a0;
- (void)dumpCRC32:(id)a0;
- (void)dumpCSECFuse:(id)a0;
- (void)dumpChipID:(id)a0;
- (void)dumpDBGDFuse:(id)a0;
- (void)dumpDPCDPacketType:(unsigned short)a0 address:(unsigned int)a1 bytes:(const char *)a2 length:(unsigned int)a3;
- (void)dumpDPCDRegisterRead:(unsigned int)a0 bytes:(const char *)a1 length:(unsigned int)a2;
- (void)dumpDPCDRegisterWrite:(unsigned int)a0 bytes:(const char *)a1 length:(unsigned int)a2;
- (void)dumpECID:(id)a0;
- (void)dumpEpoch:(id)a0;
- (void)dumpOTPSerialNumber:(id)a0;
- (void)dumpRHKPFuse:(id)a0;
- (void)dumpSDOMFuse:(id)a0;
- (void)dumpSiliconID:(id)a0;

@end
