@class AVB17221AEMSignal;

@interface AVB17221AECPAEMSignalSelectorMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short signalType;
@property (nonatomic) unsigned short signalIndex;
@property (nonatomic) unsigned short signalOutput;
@property (copy, nonatomic) AVB17221AEMSignal *signal;

+ (id)keyPathsForValuesAffectingSignal;
+ (id)keyPathsForValuesAffectingSignalIndex;
+ (id)keyPathsForValuesAffectingSignalOutput;
+ (id)keyPathsForValuesAffectingSignalType;

- (id)init;
- (void)setSignalType:(unsigned short)a0;
- (unsigned short)signalType;
- (void)setSignalIndex:(unsigned short)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setSignalOutput:(unsigned short)a0;
- (unsigned short)signalIndex;
- (unsigned short)signalOutput;

@end
