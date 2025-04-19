@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *childIndicesByIdentifier;
@property (readonly) NSArray *children;
@property (readonly) NSArray *allParameters;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isGroup;
- (void)_deserialize:(struct CADeserializer { struct __CFData *x0; char *x1; char *x2; char *x3; BOOL x4; } *)a0 fromSetFullState:(BOOL)a1;
- (void)_indexChildren;
- (void)_observersChanged:(BOOL)a0 deltaCount:(int)a1;
- (void)_serialize:(struct CASerializer { struct __CFData *x0; } *)a0;
- (id)copyNodeWithOffset:(unsigned long long)a0;
- (id)initWithChildren:(id)a0;
- (id)initWithID:(id)a0 name:(id)a1 children:(id)a2;
- (id)initWithTemplate:(id)a0 identifier:(id)a1 name:(id)a2 addressOffset:(unsigned long long)a3;

@end
