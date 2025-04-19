@class NSString;

@interface Archetype.ATCalendarEvent : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ eventTitle;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventTitle:(id)a0;

@end
