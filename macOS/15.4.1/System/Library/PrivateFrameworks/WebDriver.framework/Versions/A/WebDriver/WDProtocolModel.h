@class NSDictionary;

@interface WDProtocolModel : NSObject

@property (readonly, copy, nonatomic) NSDictionary *commands;
@property (readonly, copy, nonatomic) NSDictionary *events;
@property (readonly, copy, nonatomic) NSDictionary *types;

- (void).cxx_destruct;
- (void)_loadProtocolFromURL:(id)a0;
- (id)decodedResultsFromPayload:(id)a0 forCommand:(id)a1;
- (id)decodedResultsFromPayload:(id)a0 forEvent:(id)a1;
- (struct Ref<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Object>> { struct Object *x0; })encodedMessageForCommand:(id)a0 withParameters:(id)a1;
- (id)initWithProtocolAtURL:(id)a0;

@end
