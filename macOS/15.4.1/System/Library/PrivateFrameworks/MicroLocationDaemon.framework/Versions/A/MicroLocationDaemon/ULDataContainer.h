@interface ULDataContainer : NSObject

@property (nonatomic) long long extensionHandle;

- (void)dealloc;
- (id)init;
- (BOOL)_consumeSandboxExtensionForContainer:(struct container_object_s { } *)a0;
- (struct container_object_s { } *)_getContainerForQuery:(struct container_query_s { } *)a0;
- (const char *)_getContainerPathWithSandboxAccessForQuery:(struct container_query_s { } *)a0;
- (struct container_object_s { } *)_getContainerSingleResultForQuery:(struct container_query_s { } *)a0;
- (const char *)_getPathFromContainer:(struct container_object_s { } *)a0;
- (void)_releaseExtensionHandle;
- (id)getContainerPathWithSandboxAccess;

@end
