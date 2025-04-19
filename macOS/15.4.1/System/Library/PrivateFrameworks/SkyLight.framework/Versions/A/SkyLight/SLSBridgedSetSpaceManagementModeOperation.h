@interface SLSBridgedSetSpaceManagementModeOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long mode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(unsigned long long)a0;
- (void)invokeFallback;

@end
