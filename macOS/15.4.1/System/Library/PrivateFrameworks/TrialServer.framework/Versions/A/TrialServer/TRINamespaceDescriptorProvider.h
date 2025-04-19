@class NSString, TRINamespaceDatabase;

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding> {
    TRINamespaceDatabase *_namespaceDatabase;
    NSString *_descriptorDirectory;
}

+ (id)_descriptorFromDynamicNamespaceRecord:(id)a0;
+ (id)providerWithNamespaceDatabase:(id)a0 defaultDescriptorDirectoryPath:(id)a1;

- (void).cxx_destruct;
- (id)_dynamicDescriptorsForContainer:(int)a0 teamId:(id)a1;
- (id)descriptorWithNamespaceName:(id)a0;
- (void)enumerateDefaultDescriptorsWithBlock:(id /* block */)a0;
- (id)initWithNamespaceDatabase:(id)a0 defaultDescriptorDirectoryPath:(id)a1;

@end
