@class NSString, NSColor;

@interface CUIKCalendarSpecialDayData : NSObject

@property (nonatomic) long long dayType;
@property (retain, nonatomic) struct CGColor { } *cgColor;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) NSColor *color;

- (id)init;
- (void).cxx_destruct;

@end
