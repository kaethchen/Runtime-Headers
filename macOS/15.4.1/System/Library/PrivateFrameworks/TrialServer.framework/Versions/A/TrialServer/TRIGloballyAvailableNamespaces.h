@class TRIKVStore;

@interface TRIGloballyAvailableNamespaces : NSObject {
    TRIKVStore *_kvStore;
}

- (void).cxx_destruct;
- (id)namespaces;
- (BOOL)setNamespaces:(id)a0;
- (id)initWithKVStore:(id)a0;

@end
