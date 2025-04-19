@interface CECFakeInterfaceListener : CoreRCInterfaceListener

- (void)scheduleWithDispatchQueue:(id)a0;
- (id)fakeAddInterfaceWithProperties:(id)a0;
- (BOOL)interface:(id)a0 setAddressMask:(unsigned short)a1 error:(id *)a2;
- (BOOL)createAudioSystemDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2;
- (BOOL)createDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2 withLogicalAddress:(unsigned char)a3;
- (BOOL)createDeviceProvider:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2 andLogicalAddress:(unsigned char)a3;
- (BOOL)createPlaybackDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2;
- (BOOL)createTVDevice:(id *)a0 andFakeInterface:(id *)a1 withPhysicalAddress:(unsigned short)a2;
- (BOOL)interface:(id)a0 pingTo:(unsigned char)a1 acknowledged:(BOOL *)a2 error:(id *)a3;
- (BOOL)interface:(id)a0 sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a1 withRetryCount:(unsigned char)a2 error:(id *)a3;
- (BOOL)interface:(id)a0 setSnoopingMode:(BOOL)a1 error:(id *)a2;
- (void)unscheduleFromDispatchQueue:(id)a0;

@end
