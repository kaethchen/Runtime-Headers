@class NSString;

@interface Archetype.ATArrayOfCalendarEvents : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ calendarEvents;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCalendarEvents:(id)a0;

@end
