@class NSString;

@interface PKSandboxProvider : NSObject <PKSandboxProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)sandbox_container_path_for_pid:(int)a0 buffer:(char *)a1 bufsize:(unsigned long long)a2;
- (long long)sandbox_extension_consume:(const char *)a0;
- (char *)sandbox_extension_issue_file:(const char *)a0 path:(const char *)a1 flags:(unsigned int)a2;
- (int)sandbox_extension_release:(long long)a0;
- (int)sandbox_init_with_parameters:(const char *)a0 flags:(unsigned long long)a1 parameters:(const char **)a2 errorbuf:(char **)a3;

@end
