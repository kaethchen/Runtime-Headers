@interface AMSInt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int value;

+ (id)intWithInt:(int)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithInt:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToInt:(id)a0;

@end
