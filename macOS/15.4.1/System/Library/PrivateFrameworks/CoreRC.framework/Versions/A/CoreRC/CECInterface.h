@class NSDictionary;
@protocol CECInterfaceDelegate;

@interface CECInterface : CoreRCInterface

@property (nonatomic) struct CECFrame { unsigned char blocks[16]; unsigned char length : 5; unsigned char reserved : 3; } lastReceivedFrame;
@property (nonatomic) id<CECInterfaceDelegate> delegate;
@property (readonly, nonatomic) unsigned short addressMask;
@property (readonly, nonatomic) BOOL hasMultipleLogicalAddresses;
@property (readonly, nonatomic) BOOL snoopingMode;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) BOOL hibernating;

- (id)init;
- (id)properties;
- (BOOL)sendMessage:(id)a0 error:(id *)a1;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (BOOL)allocateCECAddress:(unsigned char *)a0 forDeviceType:(unsigned char)a1 error:(id *)a2;
- (BOOL)deallocateCECAddress:(unsigned char)a0 error:(id *)a1;
- (void)didChangeProperties;
- (BOOL)errorIsNack:(id)a0;
- (BOOL)hasMultipleLogicalAddresses;
- (void)hibernationChanged:(BOOL)a0;
- (BOOL)pingTo:(unsigned char)a0 acknowledged:(BOOL *)a1 error:(id *)a2;
- (void)receivedFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 error:(id *)a1;
- (BOOL)sendMessage:(id)a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (BOOL)setAddressMask:(unsigned short)a0 error:(id *)a1;
- (BOOL)setHardwareAddressMask:(unsigned short)a0 error:(id *)a1;
- (BOOL)setSnoopingMode:(BOOL)a0 error:(id *)a1;

@end
