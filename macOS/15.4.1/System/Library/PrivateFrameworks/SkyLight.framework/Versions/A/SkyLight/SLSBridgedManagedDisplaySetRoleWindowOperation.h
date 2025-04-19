@class NSString;

@interface SLSBridgedManagedDisplaySetRoleWindowOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) unsigned long long role;
@property (readonly) unsigned int windowID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayIdentifier:(id)a0 role:(unsigned long long)a1 windowID:(unsigned int)a2;
- (void)invokeFallback;

@end
