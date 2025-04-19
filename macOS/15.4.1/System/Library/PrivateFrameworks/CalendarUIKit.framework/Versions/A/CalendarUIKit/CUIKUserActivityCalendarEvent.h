@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {
    NSString *_externalID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    NSString *_relatedUniqueIdentifier;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long view;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (id)initWithEvent:(id)a0 view:(unsigned long long)a1 forceLocal:(BOOL)a2;
- (void)updateActivity:(id)a0;
- (id)eventFromStore:(id)a0;
- (id)initWithEvent:(id)a0 view:(unsigned long long)a1;

@end
