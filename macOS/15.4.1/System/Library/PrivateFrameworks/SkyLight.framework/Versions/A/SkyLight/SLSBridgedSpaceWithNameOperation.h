@class NSString;

@interface SLSBridgedSpaceWithNameOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *name;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)invokeFallback;
- (id)makeResultWithSpaceID:(unsigned long long)a0;

@end
