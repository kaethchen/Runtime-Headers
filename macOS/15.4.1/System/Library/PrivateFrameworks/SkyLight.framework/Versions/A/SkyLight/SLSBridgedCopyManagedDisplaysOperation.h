@interface SLSBridgedCopyManagedDisplaysOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithStrings:(id)a0;

@end
