@class QCPort, QCStringPort;

@interface QCCore3DLoader : QCPatch {
    BOOL _allMeshes;
    BOOL _normalize;
    QCStringPort *inputPath;
    QCPort *_outputPort;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (BOOL)canInstantiateWithFile:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)instantiateWithFile:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setNormalize:(BOOL)a0;
- (BOOL)setup:(id)a0;
- (void)_setMeshTransformation:(id)a0;
- (BOOL)_updateMesh;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setAllMeshes:(BOOL)a0;
- (void)setMeshPath:(id)a0;

@end
