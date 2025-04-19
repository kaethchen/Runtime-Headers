@class NSCalendar;

@interface CUIKDateFormatterCacheKey : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) BOOL is24HourFormat;
@property (readonly, nonatomic) BOOL dropDesignator;
@property (readonly, nonatomic) BOOL canDropMinutes;
@property (readonly, nonatomic) BOOL designatorRequiresWhitespace;
@property (readonly, nonatomic) BOOL addDate;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 is24HourFormat:(BOOL)a1 dropDesignator:(BOOL)a2 canDropMinutes:(BOOL)a3 designatorRequiresWhitespace:(BOOL)a4 addDate:(BOOL)a5;

@end
