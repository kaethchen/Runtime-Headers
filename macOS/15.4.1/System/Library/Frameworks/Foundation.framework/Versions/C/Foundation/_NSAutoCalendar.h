@interface _NSAutoCalendar : NSCalendar

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCalendarIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;

@end
