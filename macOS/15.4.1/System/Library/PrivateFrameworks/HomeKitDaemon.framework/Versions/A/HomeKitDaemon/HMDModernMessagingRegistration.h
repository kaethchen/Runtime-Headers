@class NSString, HMDXPCClientConnection;

@interface HMDModernMessagingRegistration : NSObject

@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) HMDXPCClientConnection *xpcConnection;

+ (id)clientHMMMMessageNameFromPrefixedMessageName:(id)a0;
+ (id)prefixedHMMMMessageNameWithMessageName:(id)a0;

- (void).cxx_destruct;
- (id)clientMessageName;
- (id)initWithMessageName:(id)a0 xpcConnection:(id)a1;
- (BOOL)matchesPrefixedMessageName:(id)a0;
- (id)prefixedMessageName;

@end
