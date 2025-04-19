@class NUComposition, NUCompositionSourceDefinition;

@interface NUCompositionSource : NUSource {
    NUCompositionSourceDefinition *_sourceDefinition;
}

@property (readonly, nonatomic) NUComposition *composition;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (id)initWithSourceSchema:(id)a0;

@end
