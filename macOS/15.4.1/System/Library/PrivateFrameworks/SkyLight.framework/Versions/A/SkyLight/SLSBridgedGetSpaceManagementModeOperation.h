@interface SLSBridgedGetSpaceManagementModeOperation : SLSSynchronousBridgedWindowManagementOperation

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithSpaceManagementMode:(unsigned long long)a0;

@end
