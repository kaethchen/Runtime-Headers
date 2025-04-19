@interface ReplicatorCore.MigrationClient : NSObject {
    void /* unknown type, empty encoding */ recordMetadataStore;
    void /* unknown type, empty encoding */ recordStore;
    void /* unknown type, empty encoding */ clientDescriptorStore;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;

@end
