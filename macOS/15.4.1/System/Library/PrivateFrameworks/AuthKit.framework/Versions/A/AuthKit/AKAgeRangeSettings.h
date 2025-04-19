@interface AKAgeRangeSettings : NSObject

@property (readonly, nonatomic) int u13Limit;
@property (readonly, nonatomic) int u18Limit;

- (id)initWithU13Limit:(int)a0 u18Limit:(int)a1;

@end
