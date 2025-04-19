@class NSString;
@protocol ISVariantResourceProviderProtocol;

@interface ISRuntimeCompositorResourceLayer : NSObject <ISCompositVariantResourceLayerProtocol>

@property (retain) NSString *recipeName;
@property (weak) id<ISVariantResourceProviderProtocol> resourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)applyToContext:(struct CGContext { } *)a0 size:(unsigned long long)a1 scale:(unsigned long long)a2;
- (id)initWithRecipeName:(id)a0 resourceProvider:(id)a1;

@end
