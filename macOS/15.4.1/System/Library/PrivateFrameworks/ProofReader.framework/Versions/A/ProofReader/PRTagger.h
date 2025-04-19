@interface PRTagger : NLTagger

@property (readonly) unsigned long long orthoIndex;

- (id)initWithTagSchemes:(id)a0 orthoIndex:(unsigned long long)a1;
- (void)setOrthoIndex:(unsigned long long)a0;

@end
