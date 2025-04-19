@class NSString, NSDate;

@interface SSCalendarResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *calendarName;
@property (retain, nonatomic) NSString *delegateCalendarName;
@property (retain, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *location;
@property (nonatomic) BOOL isAllDay;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;
+ (id)stringWithStartDate:(id)a0 endDate:(id)a1 isAllDay:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildBackgroundColor;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildThumbnail;
- (id)buildTitle;
- (unsigned long long)numberOfLinesForDescriptions;

@end
