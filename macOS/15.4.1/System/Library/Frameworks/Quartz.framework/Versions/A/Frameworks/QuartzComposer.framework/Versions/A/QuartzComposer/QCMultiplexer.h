@class QCPort, QCIndexPort, NSMutableArray;

@interface QCMultiplexer : QCPatch {
    QCIndexPort *inputIndex;
    NSMutableArray *_inPorts;
    QCPort *_outPort;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (unsigned long long)inputCount;
- (void)setInputCount:(unsigned long long)a0;
- (id)_activePort;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (Class)portClass;
- (void)setPortClass:(Class)a0;

@end
