@interface __NSCFCalendar : NSCalendar <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
