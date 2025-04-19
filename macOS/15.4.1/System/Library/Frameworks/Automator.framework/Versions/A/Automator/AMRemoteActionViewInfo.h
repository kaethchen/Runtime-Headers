@interface AMRemoteActionViewInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;
@property (nonatomic) unsigned long long autoresizingMask;
@property (readonly, nonatomic) BOOL hasInternalConstraints;
@property (readonly, nonatomic) BOOL hasMinimumHeightConstraint;

+ (id)remoteActionViewInfoForActionView:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 translatesAutoresizingMaskIntoConstraints:(BOOL)a1 autoresizingMask:(unsigned long long)a2 hasInternalConstraints:(BOOL)a3 hasMinimumHeightConstraint:(BOOL)a4;

@end
