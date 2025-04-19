@class NSArray;
@protocol IRInterfaceDelegate;

@interface IRInterface : CoreRCInterface

@property (nonatomic) id<IRInterfaceDelegate> delegate;
@property (nonatomic) BOOL isTxInterface;
@property (nonatomic) BOOL isRxInterface;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) unsigned long long maxStoredCommands;
@property (readonly, nonatomic) BOOL canWakeFor3rdPartyIR;

- (id)buttons;
- (BOOL)processTimings:(const unsigned int *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 timestamp:(unsigned long long)a2;
- (BOOL)canWakeFor3rdPartyIR;
- (BOOL)clearAllStoredCommands:(id *)a0;
- (BOOL)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (BOOL)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (unsigned long long)maxStoredCommands;
- (void)receivedCommand:(id)a0;
- (void)receivedFrame:(id)a0;
- (BOOL)resetAllButtons:(id *)a0;
- (BOOL)setCommand:(id)a0 forButtonCombination:(id)a1 delay:(double)a2 error:(id *)a3;
- (BOOL)setLearnedProtocolMask:(unsigned int)a0 error:(id *)a1;
- (BOOL)setPairState:(BOOL)a0 forDeviceUID:(unsigned char)a1 error:(id *)a2;
- (BOOL)transmitCommand:(id)a0 pressDuration:(double)a1 error:(id *)a2;
- (BOOL)transmitFrame:(id)a0 error:(id *)a1;

@end
