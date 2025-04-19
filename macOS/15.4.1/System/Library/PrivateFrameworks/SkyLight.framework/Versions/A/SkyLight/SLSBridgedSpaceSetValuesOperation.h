@class NSDictionary;

@interface SLSBridgedSpaceSetValuesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly, copy) NSDictionary *values;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 values:(id)a1;
- (void)invokeFallback;

@end
