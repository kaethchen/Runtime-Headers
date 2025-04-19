@interface SLSBridgedCopySpacesOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned int options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(unsigned int)a0;
- (id)invokeFallback;
- (id)makeResultWithNumbers:(id)a0;

@end
