@class POKerberosMapping, NSString;

@interface ASAuthorizationProviderExtensionKerberosMapping : NSObject

@property (readonly, nonatomic) POKerberosMapping *kerberosMapping;
@property (copy, nonatomic) NSString *ticketKeyPath;
@property (copy, nonatomic) NSString *messageBufferKeyName;
@property (copy, nonatomic) NSString *realmKeyName;
@property (copy, nonatomic) NSString *serviceNameKeyName;
@property (copy, nonatomic) NSString *clientNameKeyName;
@property (copy, nonatomic) NSString *encryptionKeyTypeKeyName;
@property (copy, nonatomic) NSString *sessionKeyKeyName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKerberosMapping:(id)a0;

@end
