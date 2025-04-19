@class NSString, INImage;

@interface INImageNoteContent : INNoteContent <INImageProxyInjecting, INCacheableContainer, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, setter=_setImage:) INImage *image;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (id)_initWithImage:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;

@end
