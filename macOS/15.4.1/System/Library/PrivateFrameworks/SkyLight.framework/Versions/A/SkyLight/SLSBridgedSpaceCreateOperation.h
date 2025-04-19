@class NSDictionary;

@interface SLSBridgedSpaceCreateOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned int options;
@property (readonly, copy) NSDictionary *values;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(unsigned int)a0 values:(id)a1;
- (id)invokeFallback;
- (id)makeResultWithSpaceID:(unsigned long long)a0;

@end
