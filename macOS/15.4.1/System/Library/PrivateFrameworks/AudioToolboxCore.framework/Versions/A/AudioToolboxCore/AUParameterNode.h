@class NSString, AUParameterGroup;

@interface AUParameterNode : NSObject

@property (copy) id /* block */ implementorValueObserver;
@property (copy) id /* block */ implementorValueProvider;
@property (copy) id /* block */ implementorStringFromValueCallback;
@property (copy) id /* block */ implementorValueFromStringCallback;
@property (copy) id /* block */ implementorDisplayNameWithLengthCallback;
@property (nonatomic) unsigned long long indexInGroup;
@property (weak, nonatomic) AUParameterGroup *parentNode;
@property (nonatomic) void *observerList;
@property (copy) id /* block */ impl_implementorValueObserver;
@property (copy) id /* block */ impl_implementorValueProvider;
@property (copy) id /* block */ impl_implementorStringFromValueCallback;
@property (copy) id /* block */ impl_implementorValueFromStringCallback;
@property (copy) id /* block */ impl_implementorDisplayNameWithLengthCallback;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *displayName;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isGroup;
- (void *)tokenByAddingParameterObserver:(id /* block */)a0;
- (void *)_addRecObserver:(id /* block */)a0 autoObserver:(id /* block */)a1;
- (void)_deserialize:(struct CADeserializer { struct __CFData *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a0 fromSetFullState:(BOOL)a1;
- (void)_observersChanged:(BOOL)a0 deltaCount:(int)a1;
- (id)_rootParent;
- (void)_serialize:(struct CASerializer { struct __CFData *x0; } *)a0;
- (void)_walkTree:(int)a0 callback:(id /* block */)a1;
- (id)copyNodeWithOffset:(unsigned long long)a0;
- (id)displayNameWithLength:(long long)a0;
- (id)initWithID:(id)a0 name:(id)a1;
- (void)removeParameterObserver:(void *)a0;
- (void *)tokenByAddingParameterAutomationObserver:(id /* block */)a0;
- (void *)tokenByAddingParameterRecordingObserver:(id /* block */)a0;

@end
