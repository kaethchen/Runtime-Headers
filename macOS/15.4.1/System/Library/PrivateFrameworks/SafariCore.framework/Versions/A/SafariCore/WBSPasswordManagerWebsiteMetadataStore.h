@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPasswordManagerWebsiteMetadataStore : NSObject {
    Class _metadataEntryClass;
    NSString *_accessGroup;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)_initWithMetadataEntryClass:(Class)a0 keychainAccessGroup:(id)a1;
- (void)allMetadataWithCompletionHandler:(id /* block */)a0;
- (void)debug_deleteAllPersistedDataWithCompletionHandler:(id /* block */)a0;
- (id)initWithMetadataEntryClass:(Class)a0;
- (id)initWithMetadataEntryClass:(Class)a0 isForTesting:(BOOL)a1;
- (void)metadataForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveMetadataEntry:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (id)synchronousMetadataForDomain:(id)a0;
- (id)test_initWithMetadataEntryClass:(Class)a0 keychainAccessGroup:(id)a1;

@end
