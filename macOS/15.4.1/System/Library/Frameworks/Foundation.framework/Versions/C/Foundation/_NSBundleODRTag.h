@interface _NSBundleODRTag : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double preservationPriority;
@property BOOL alwaysPreserved;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
