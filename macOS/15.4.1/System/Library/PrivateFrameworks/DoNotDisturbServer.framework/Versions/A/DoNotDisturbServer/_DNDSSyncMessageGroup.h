@class DNDSMutableModeAssertionStore;

@interface _DNDSSyncMessageGroup : NSObject <NSCopying>

@property (readonly) unsigned long long protocolVersion;
@property (readonly) unsigned long long serviceType;
@property (readonly, copy) DNDSMutableModeAssertionStore *store;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceType:(unsigned long long)a0 protocolVersion:(unsigned long long)a1 store:(id)a2;

@end
