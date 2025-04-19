@class NSDictionary, NSMutableDictionary;

@interface KHHolidaysCalendarParser : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *typeListForCountry;
@property (retain, nonatomic) NSMutableDictionary *resultDictionary;

+ (id)parseCalendarString:(id)a0 type:(unsigned long long)a1 typeListForCountry:(id)a2;

- (void).cxx_destruct;
- (void)_addEventWithName:(id)a0 key:(id)a1;
- (id)_parseCalendarString:(id)a0;
- (id)initWithType:(unsigned long long)a0 typeListForCountry:(id)a1;

@end
