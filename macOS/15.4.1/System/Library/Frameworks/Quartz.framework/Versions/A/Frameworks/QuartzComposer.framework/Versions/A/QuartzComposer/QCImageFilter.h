@class QCBooleanPort, QCImagePort, CIFilter, GFList;

@interface QCImageFilter : QCPatch {
    QCImagePort *outputImage;
    BOOL _normalizeCoordinates;
    unsigned long long _filterVersion;
    CIFilter *_ciFilter;
    GFList *_paramList;
    QCBooleanPort *_bypassPort;
    QCImagePort *_imagePort;
    BOOL _rerun;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (void)initialize;
+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)attributesWithIdentifier:(id)a0;
+ (BOOL)isCIFilterCompatible:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setNormalizeCoordinates:(BOOL)a0;
- (BOOL)setup:(id)a0;
- (id)_baseKey;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (id)_inputPortAttributesWithKey:(id)a0 index:(unsigned long long)a1 count:(unsigned long long)a2 type:(id)a3;
- (void)cleanup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (BOOL)hasBypass;
- (void)setHasBypass:(BOOL)a0;

@end
