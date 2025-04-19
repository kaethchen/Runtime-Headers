@class IKImageWrapper;

@interface IKShadowTool : NSObject {
    IKImageWrapper *_shadowComponents[12];
    IKImageWrapper *_shadowGroup;
    struct CGSize { double width; double height; } _shadowComponentSize[12];
    float _shadowMapCoordinates[56];
    unsigned char _stripIndices[54];
    unsigned char _stripXMapTable[28];
    unsigned char _stripYMapTable[28];
}

+ (id)sharedInstanceWithScaleFactor:(unsigned long long)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithScaleFactor:(double)a0;
- (id *)shadowComponent;
- (struct CGSize { double x0; double x1; } *)shadowComponentSize;
- (id)shadowGroup;
- (float *)shadowMapCoordinatesForStrip;
- (char *)stripIndices;
- (unsigned int)stripIndicesCount;
- (char *)stripXMapTable;
- (char *)stripYMapTable;

@end
