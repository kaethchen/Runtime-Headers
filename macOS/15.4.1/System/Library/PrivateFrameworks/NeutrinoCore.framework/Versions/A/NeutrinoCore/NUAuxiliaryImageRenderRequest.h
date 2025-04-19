@interface NUAuxiliaryImageRenderRequest : NURenderRequest

@property long long auxiliaryImageType;
@property BOOL skipRenderIfNotRequired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)submitSynchronous:(out id *)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
