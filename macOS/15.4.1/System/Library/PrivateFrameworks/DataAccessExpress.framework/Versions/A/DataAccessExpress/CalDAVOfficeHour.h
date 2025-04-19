@class NSDateComponents;

@interface CalDAVOfficeHour : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSDateComponents *startDate;
@property (copy, nonatomic) NSDateComponents *endDate;

+ (id)logHandle;
+ (id)dataFromOfficeHours:(id)a0;
+ (id)officeHoursFromData:(id)a0;
+ (id)_gregorianGMTCalendar;
+ (id)icsFromOfficeHours:(id)a0;
+ (id)officeHoursFromICS:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
