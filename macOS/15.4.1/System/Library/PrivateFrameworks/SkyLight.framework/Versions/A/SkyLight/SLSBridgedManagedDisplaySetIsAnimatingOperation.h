@class NSString;

@interface SLSBridgedManagedDisplaySetIsAnimatingOperation : SLSAsynchronousBridgedWindowManagementOperation

@property (readonly, copy) NSString *displayIdentifier;
@property (readonly) BOOL isAnimating;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayIdentifier:(id)a0 isAnimating:(BOOL)a1;
- (void)invokeFallback;

@end
