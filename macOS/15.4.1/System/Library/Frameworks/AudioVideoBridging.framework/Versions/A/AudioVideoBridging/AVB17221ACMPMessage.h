@class AVBMACAddress, AVBIPAddress;

@interface AVB17221ACMPMessage : NSObject <NSCopying>

@property BOOL messageIs2013;
@property unsigned char messageType;
@property unsigned char status;
@property unsigned long long streamID;
@property unsigned long long controllerEntityID;
@property unsigned long long talkerEntityID;
@property unsigned long long listenerEntityID;
@property unsigned short talkerUniqueID;
@property unsigned short listenerUniqueID;
@property (copy) AVBMACAddress *destinationMAC;
@property unsigned short connectionCount;
@property unsigned short sequenceID;
@property unsigned short flags;
@property unsigned short vlanID;
@property unsigned short connectedListenersEntries;
@property BOOL connectedListenersEntriesValid;
@property unsigned short ipFlags;
@property unsigned short sourcePort;
@property unsigned short destinationPort;
@property (copy) AVBIPAddress *sourceIPAddress;
@property (copy) AVBIPAddress *destinationIPAddress;
@property (copy) AVBMACAddress *sourceMAC;

+ (id)errorForStatusCode:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setPayload:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned char x5[6]; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15[16]; unsigned char x16[16]; } *)a0;
- (id)errorForStatusCode;
- (id)initWithPayload:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned short x3; unsigned short x4; unsigned char x5[6]; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; unsigned short x14; unsigned char x15[16]; unsigned char x16[16]; } *)a0 length:(unsigned short)a1;

@end
