@class NSData, NSString, QCPort;

@interface QCImageLoader : QCPatch {
    BOOL _allImages;
    BOOL _fillBackground;
    QCPort *_outputPort;
    NSData *_imageData;
    BOOL _colorCorrection;
    unsigned int _target;
    unsigned long long _mipmapLevels;
    NSString *_sourcePath;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (BOOL)canInstantiateWithFile:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)instantiateWithFile:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (id)imageData;
- (BOOL)_updateImage;
- (id)sourcePath;
- (void)setImageData:(id)a0;
- (void)setImagePath:(id)a0;
- (BOOL)setup:(id)a0;
- (void)_configureImage:(id)a0;
- (void)reloadDataFromPath;
- (void)setAllImages:(BOOL)a0;
- (void)setColorCorrection:(BOOL)a0;
- (void)setFillBackground:(BOOL)a0;

@end
