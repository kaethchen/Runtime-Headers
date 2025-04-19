@interface SLSBridgedGetSpaceNeedsSafeApertureOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0;
- (id)invokeFallback;
- (id)makeResultWithBoolValue:(BOOL)a0;

@end
