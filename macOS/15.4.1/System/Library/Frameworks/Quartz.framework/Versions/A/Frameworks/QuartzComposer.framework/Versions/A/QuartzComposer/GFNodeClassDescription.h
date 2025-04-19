@class GFList, NSMutableDictionary;

@interface GFNodeClassDescription : NSObject {
    Class _class;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    GFList *_inputs;
    GFList *_outputs;
    BOOL _attributesInitialized;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_identifierAttributes;
    NSMutableDictionary *_userInfo;
}

- (void)dealloc;
- (id)ivarOutputPorts;
- (id)xmlAttributesForNodeIdentifier:(id)a0;
- (void)_initializeAttributes;
- (id)attributesForInputPort:(id)a0 nodeIdentifier:(id)a1;
- (id)attributesForNodeIdentifier:(id)a0;
- (id)attributesForOutputPort:(id)a0 nodeIdentifier:(id)a1;
- (id)initWithNodeClass:(Class)a0;
- (id)ivarInputPorts;
- (Class)nodeClass;
- (id)xmlAttributes;

@end
