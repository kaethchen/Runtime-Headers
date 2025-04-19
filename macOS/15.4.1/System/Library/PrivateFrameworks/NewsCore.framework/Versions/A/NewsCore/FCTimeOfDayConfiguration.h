@interface FCTimeOfDayConfiguration : NSObject

@property (readonly, nonatomic) long long start;
@property (readonly, nonatomic) long long end;

- (id)description;
- (id)initWithDictionary:(id)a0;

@end
