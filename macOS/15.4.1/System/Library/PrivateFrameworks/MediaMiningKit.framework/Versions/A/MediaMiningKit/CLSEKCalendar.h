@class NSString, NSSet;

@interface CLSEKCalendar : NSObject <NSCoding>

@property (readonly) NSString *calendarIdentifier;
@property (readonly) BOOL hasSharees;
@property (readonly) NSSet *shareesAndOwner;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEKCalendar:(id)a0;

@end
