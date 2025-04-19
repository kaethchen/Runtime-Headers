@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long view;
@property (readonly, nonatomic) BOOL isTomorrow;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void)updateActivity:(id)a0;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1 calendar:(id)a2;

@end
