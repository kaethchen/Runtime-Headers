@class NSString;

@interface EKCalendarChange : EKObjectChange

@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL colorChanged;
@property (readonly, nonatomic) BOOL orderChanged;
@property (readonly, nonatomic) NSString *calendarIdentifier;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
