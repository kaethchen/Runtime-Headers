@class NSDate, SAUISnippet, NSString, INIntentResponse, NSUUID, NSDateInterval, INImage, INIntent, CSSearchableItem;

@interface INInteraction : NSObject <INEnumerable, INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long intentHandlingStatus;
@property (retain, setter=_setSnippet:) SAUISnippet *_snippet;
@property (nonatomic, setter=_setDonatedBySiri:) BOOL _donatedBySiri;
@property (copy, setter=_setIntent:) INIntent *intent;
@property (copy, setter=_setIntentResponse:) INIntentResponse *intentResponse;
@property (readonly, copy) CSSearchableItem *_searchableItem;
@property (readonly) long long _indexingHash;
@property (copy, setter=_setContextExtensionUUID:) NSUUID *_contextExtensionUUID;
@property long long direction;
@property (copy) NSDateInterval *dateInterval;
@property (copy) NSString *identifier;
@property (copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) INImage *_keyImage;

+ (void)initialize;
+ (unsigned long long)_searchableItemVersion;
+ (void)deleteAllInteractionsWithCompletion:(id /* block */)a0;
+ (void)deleteInteractionsWithGroupIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)deleteInteractionsWithIdentifiers:(id)a0 completion:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)_commonInit;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (void)_donateInteractionWithBundleId:(id)a0 completion:(id /* block */)a1;
- (id)_initWithIntent:(id)a0 response:(id)a1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (id)_searchableItemIncludingData:(BOOL)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)donateInteractionWithCompletion:(id /* block */)a0;
- (id)initWithIntent:(id)a0 response:(id)a1;
- (id)parameterValueForParameter:(id)a0;

@end
