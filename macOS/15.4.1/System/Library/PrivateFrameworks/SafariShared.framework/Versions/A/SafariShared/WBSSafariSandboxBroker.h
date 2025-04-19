@class NSObject;
@protocol OS_os_log;

@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;

- (void).cxx_destruct;
- (id)_URLsRelatedToURL:(id)a0 containingOriginalURL:(BOOL *)a1;
- (id)_sandboxFileExtensionForURL:(id)a0 class:(const char *)a1;
- (void)changeUserWebSearchProviderInfoTo:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)relatedExtensionsForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
