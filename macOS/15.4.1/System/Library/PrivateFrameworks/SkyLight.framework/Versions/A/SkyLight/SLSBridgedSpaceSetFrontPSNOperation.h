@interface SLSBridgedSpaceSetFrontPSNOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly) unsigned long long spaceID;
@property (readonly) struct CPSProcessSerNum { unsigned int hi; unsigned int lo; } psn;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSpaceID:(unsigned long long)a0 psn:(struct CPSProcessSerNum { unsigned int x0; unsigned int x1; })a1;
- (void)invokeFallback;

@end
