@class QCBooleanPort, NSMutableArray, QCIndexPort, QCNumberPort, QCStringPort;

@interface QCOpenGLInfo : QCPatch {
    QCStringPort *outputVendor;
    QCStringPort *outputRenderer;
    QCNumberPort *outputVersion;
    QCIndexPort *outputVRAM;
    QCIndexPort *outputTextureUnits;
    QCIndexPort *outputMaxTextureSize;
    QCIndexPort *outputMaxRenderSize;
    QCIndexPort *outputBitsPerPixel;
    QCBooleanPort *outputFloatComponents;
    QCBooleanPort *outputCIAccelerated;
    NSMutableArray *_extensionPorts;
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
- (id)extensions;
- (void)setExtensions:(id)a0;
- (BOOL)_addExtension:(id)a0;
- (BOOL)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (void)_removeExtension:(id)a0;
- (void)_updateInfo:(id)a0;

@end
