@class CXScreenShareAttributes;

@interface CXSetScreenShareAttributesCallAction : CXCallAction

@property (retain, nonatomic) CXScreenShareAttributes *attributes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 attributes:(id)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
