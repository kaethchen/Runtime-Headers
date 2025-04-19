@class QCCache, QCImagePort, QCNumberPort, QCStringPort, QCBooleanPort;

@interface QCImageDownloader : QCDownloadPatch {
    QCStringPort *inputURL;
    QCImagePort *outputImage;
    QCNumberPort *outputProgress;
    QCBooleanPort *outputSignal;
    BOOL _synchronousMode;
    unsigned long long _maxCacheSize;
    BOOL _colorCorrection;
    QCBooleanPort *_signalPort;
    QCCache *_cache;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)synchronousMode;
- (void)setSynchronousMode:(BOOL)a0;
- (BOOL)setup:(id)a0;
- (void)_addImageToCache:(id)a0;
- (void)cleanup:(id)a0;
- (id)createResourceWithDownloadedData:(id)a0 sourceURL:(id)a1;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (unsigned long long)maximumCacheSize;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setColorCorrection:(BOOL)a0;
- (void)setMaximumCacheSize:(unsigned long long)a0;

@end
