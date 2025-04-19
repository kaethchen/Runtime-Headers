@class NSBezierPath, NSDate;

@interface AKPVSignaturePayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSBezierPath *path;
@property double baselineHeight;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *lastUsedDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
