@interface EWSCalendarPermissionType : EWSBasePermissionType

@property (nonatomic) long long ReadItems;
@property (nonatomic) long long CalendarPermissionLevel;

+ (id)definition;

- (id)description;

@end
