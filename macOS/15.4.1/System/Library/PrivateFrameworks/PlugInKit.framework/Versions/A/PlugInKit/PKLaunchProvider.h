@class NSString;

@interface PKLaunchProvider : NSObject <PKLaunchProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)add_external_service:(int)a0 path:(const char *)a1 overlay:(id)a2;
- (id)copy_busy_extension_instances:(const char **)a0 cnt:(unsigned long long)a1;
- (id)copy_extension_properties:(id)a0;
- (id)copy_extension_properties_for_pid:(int)a0;
- (void)remove_external_service:(const char *)a0 version:(const char *)a1 targetq:(id)a2 callback:(id /* block */)a3;

@end
