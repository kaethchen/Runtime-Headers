@class GEOFeatureStyleAttributes;

@interface VKMarkerFeatureHandle : NSObject {
    struct MarkerFeatureHandle { unsigned char featureType; long long featureIndex; struct QuadTile { unsigned char _type; unsigned char _level; int _yIdx; int _xIdx; unsigned long long _hash; BOOL _needsHashUpdate; } key; int tileStyle; unsigned int tileVersion; struct shared_ptr<const FeatureStyleAttributes> { struct FeatureStyleAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } styleAttributes; } _actualHandle;
    GEOFeatureStyleAttributes *_styleAttributes;
    int _featureType;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)styleAttributes;
- (long long)featureIndex;
- (int)featureType;
- (int)tileStyle;
- (const void *)actualHandle;
- (id)initWithMarkerHandle:(const void *)a0 featureType:(int)a1;
- (unsigned int)tileVersion;
- (int)tileX;
- (int)tileY;
- (int)tileZ;

@end
