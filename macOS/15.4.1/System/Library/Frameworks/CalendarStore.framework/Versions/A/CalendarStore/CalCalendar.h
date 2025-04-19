@class NSColor, NSString, EKCalendar;

@interface CalCalendar : NSObject <NSCopying>

@property (retain, nonatomic) EKCalendar *ekCalendar;
@property (copy) NSColor *color;
@property (copy) NSString *notes;
@property (copy) NSString *title;
@property (readonly) NSString *type;
@property (readonly) NSString *uid;
@property (readonly) BOOL isEditable;

+ (id)calendar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEKCalendar:(id)a0;

@end
