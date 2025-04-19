@class NSDateComponents;

@interface EWSCalendarViewType : EWSBasePagingType

@property (retain, nonatomic) NSDateComponents *StartDate;
@property (retain, nonatomic) NSDateComponents *EndDate;

+ (id)definition;

- (void).cxx_destruct;

@end
