@class NSString;

@interface DRSSandboxExtensionHelper : NSObject

@property (nonatomic) long long sandboxExtensionHandle;
@property (readonly, nonatomic) BOOL didInit;
@property (readonly, nonatomic) NSString *logPath;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSandboxExtensionToken:(id)a0 logPath:(id)a1 errorOut:(id *)a2;

@end
