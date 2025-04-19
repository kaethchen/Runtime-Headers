@class NSString, NSMutableDictionary, IFImageBag;

@interface ISImageSetVariantResource : NSObject <ISVariantResourceProtocol>

@property (readonly) NSMutableDictionary *resourceImages;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSString *variantName;
@property (readonly) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceWithURL:(id)a0 resourceInfo:(id)a1;

- (void).cxx_destruct;
- (void)addImage:(struct CGImage { } *)a0 size:(unsigned long long)a1 scale:(unsigned long long)a2;
- (struct CGImage { } *)imageForSize:(unsigned long long)a0 scale:(unsigned long long)a1 error:(id *)a2;
- (id)initWithVariantName:(id)a0 flags:(unsigned long long)a1;

@end
