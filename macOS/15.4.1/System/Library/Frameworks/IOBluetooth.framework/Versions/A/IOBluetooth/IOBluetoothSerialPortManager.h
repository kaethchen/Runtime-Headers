@interface IOBluetoothSerialPortManager : BTClient

+ (id)sharedSerialPortManager;

- (id)init;
- (id)getBluetoothModemPortDictionary;
- (int)addPort:(id)a0;
- (BOOL)canModifySerialPort:(id)a0;
- (id)createOutgoingSerialPortForFirstSerialServiceOnDevice:(id)a0;
- (id)createOutgoingSerialPortForFirstServiceOnDevice:(id)a0 withUUID:(unsigned short)a1;
- (int)deviceHasSerialPortServices:(id)a0 count:(int *)a1 includeRFCOMMServices:(BOOL)a2 includeDUNServices:(BOOL)a3;
- (id)getAllOutgoingPersistentSerialPorts:(BOOL)a0 andIncomingPersistentSerialPorts:(BOOL)a1 includeBluetoothModemPort:(BOOL)a2;
- (id)getAllPersistentOutgoingSerialPortsForDevice:(id)a0;
- (id)getBSDTTYCompatibleNameForDevice:(id)a0 andServiceName:(id)a1;
- (id)getConnection;
- (id)getSerialPortWithName:(id)a0;
- (id)getUniqueSerialPortNameWithBaseString:(id)a0;
- (BOOL)isAcceptableSerialPortName:(id)a0;
- (int)modifyPersistentSerialPort:(const char *)a0 andDict:(struct __CFDictionary { } *)a1;
- (void)removeAllSerialPortsForDevice:(id)a0;
- (int)removePort:(id)a0;
- (void)resetSerialPortCreationUniqueIndex;
- (BOOL)serialPortExists:(id)a0;
- (int)updatePort:(id)a0 removeAndReaddIfNecessary:(BOOL)a1;

@end
