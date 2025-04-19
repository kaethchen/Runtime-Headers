@class NSString;

@interface AACustodianSetupRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *custodianSetupToken;
@property (copy, nonatomic) NSString *contactID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_parseAuthResults:(id)a0;
- (id)initWithHandle:(id)a0 authResults:(id)a1;

@end
