@class NSString, NSURL, EFDeallocInvocationToken, NSObject;
@protocol OS_os_log;

@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EFDeallocInvocationToken *invocable;
@property (readonly, nonatomic) NSString *sandboxToken;
@property (readonly) NSURL *url;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addInvalidationHandler:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 readOnly:(BOOL)a1;

@end
