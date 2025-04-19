@class MTRDeviceController, NSArray, NSSet, NSMutableSet, NSNumber, NSMutableArray;

@interface MTRServerCluster : NSObject {
    NSMutableSet *_accessGrants;
    NSMutableArray *_attributes;
    MTRDeviceController *_deviceController;
    struct unique_ptr<MTRServerAttributeAccessInterface, std::default_delete<MTRServerAttributeAccessInterface>> { struct __compressed_pair<MTRServerAttributeAccessInterface *, std::default_delete<MTRServerAttributeAccessInterface>> { struct MTRServerAttributeAccessInterface *__value_; } __ptr_; } _attributeAccessInterface;
    struct vector<EmberAfAttributeMetadata, std::allocator<EmberAfAttributeMetadata>> { struct EmberAfAttributeMetadata *__begin_; struct EmberAfAttributeMetadata *__end_; struct __compressed_pair<EmberAfAttributeMetadata *, std::allocator<EmberAfAttributeMetadata>> { struct EmberAfAttributeMetadata *__value_; } __end_cap_; } _matterAttributeMetadata;
    struct unique_ptr<unsigned int[], std::default_delete<unsigned int[]>> { struct __compressed_pair<unsigned int *, std::default_delete<unsigned int[]>> { unsigned int *__value_; } __ptr_; } _matterAcceptedCommandList;
    struct unique_ptr<unsigned int[], std::default_delete<unsigned int[]>> { struct __compressed_pair<unsigned int *, std::default_delete<unsigned int[]>> { unsigned int *__value_; } __ptr_; } _matterGeneratedCommandList;
    NSSet *_matterAccessGrants;
    unsigned short _parentEndpoint;
    NSArray *_acceptedCommands;
    NSArray *_generatedCommands;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSArray *matterAccessGrants;
@property (readonly) unsigned short parentEndpoint;
@property (readonly) struct Span<const EmberAfAttributeMetadata> { struct EmberAfAttributeMetadata *x0; unsigned long long x1; } matterAttributeMetadata;
@property (copy) NSArray *acceptedCommands;
@property (copy) NSArray *generatedCommands;
@property (readonly) unsigned int *matterAcceptedCommands;
@property (readonly) unsigned int *matterGeneratedCommands;
@property (readonly, copy) NSNumber *clusterID;
@property (readonly, copy) NSNumber *clusterRevision;
@property (readonly, copy) NSArray *accessGrants;
@property (readonly, copy) NSArray *attributes;

+ (id)newDescriptorCluster;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (BOOL)addAttribute:(id)a0;
- (void)addAccessGrant:(id)a0;
- (BOOL)addToEndpoint:(unsigned short)a0;
- (BOOL)associateWithController:(id)a0;
- (id)initWithClusterID:(id)a0 revision:(id)a1;
- (void)registerMatterCluster;
- (void)removeAccessGrant:(id)a0;
- (void)unregisterMatterCluster;

@end
