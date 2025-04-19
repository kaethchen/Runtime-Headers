@class NSArray;

@interface SLSBridgedShowSpacesOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSArray *spaces;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaces:(id)a0;
- (void)invokeFallback;

@end
