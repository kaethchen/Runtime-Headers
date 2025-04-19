@interface CoreIRDeviceClient : CoreIRDevice

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (BOOL)sendCommand:(id)a0 error:(id *)a1;
- (BOOL)updateMappingWithSession:(id)a0 error:(id *)a1;
- (BOOL)changeButtonCombination:(id)a0 delay:(double)a1 enabled:(BOOL)a2 error:(id *)a3;
- (BOOL)clearAllStoredCommands:(id *)a0;
- (BOOL)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (BOOL)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (BOOL)setCommand:(unsigned long long)a0 target:(id)a1 forButtonCombination:(id)a2 delay:(double)a3 error:(id *)a4;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (id)startLearningSessionWithReason:(unsigned long long)a0 error:(id *)a1;

@end
