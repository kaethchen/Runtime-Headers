@class NSMutableArray, QCNumberPort, QCColorPort;

@interface QCLighting : QCPatch {
    QCNumberPort *inputObjectSpecular;
    QCNumberPort *inputObjectShininess;
    QCColorPort *inputAmbientColor;
    BOOL _separateSpecular;
    BOOL _twoSideLighting;
    float _polygonOffset;
    NSMutableArray *_lightPorts;
    NSMutableArray *_shadowBuffers;
}

+ (BOOL)isSafe;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (id)_lightPortList;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (unsigned long long)numberOfLights;
- (void)setNumberOfLights:(unsigned long long)a0;

@end
