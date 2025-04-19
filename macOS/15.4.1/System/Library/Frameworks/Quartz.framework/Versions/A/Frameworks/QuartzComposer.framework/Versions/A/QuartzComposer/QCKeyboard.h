@class QCBooleanPort;

@interface QCKeyboard : QCPatch {
    unsigned long long _keyCount;
    unsigned short _keyList[64];
    QCBooleanPort *_keyPortList[64];
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (id)stringWithKey:(unsigned short)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (unsigned long long)keyCount;
- (BOOL)setup:(id)a0;
- (BOOL)_addKey:(unsigned short)a0;
- (void)_removeKey:(unsigned short)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)observedKeys;
- (void)setObservedKeys:(id)a0;

@end
