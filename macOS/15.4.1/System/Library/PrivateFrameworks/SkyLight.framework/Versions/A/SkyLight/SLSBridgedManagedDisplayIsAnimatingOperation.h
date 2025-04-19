@class NSString;

@interface SLSBridgedManagedDisplayIsAnimatingOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayIdentifier:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithBoolValue:(BOOL)a0;

@end
