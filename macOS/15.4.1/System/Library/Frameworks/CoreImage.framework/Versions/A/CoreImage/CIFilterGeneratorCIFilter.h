@class CIFilterGenerator, NSMutableArray, NSMutableDictionary;

@interface CIFilterGeneratorCIFilter : CIFilter {
    CIFilterGenerator *_generator;
    NSMutableArray *_inputKeys;
    NSMutableArray *_outputKeys;
    NSMutableDictionary *_customAttributes;
    BOOL _dirty;
}

+ (id)filterWithGenerator:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (id)outputImage;
- (id)inputKeys;
- (id)outputKeys;
- (id)customAttributes;
- (id)_provideFilterCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGenerator:(id)a0;
- (void)propagateConnections;

@end
