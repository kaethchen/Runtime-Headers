@interface PSIDate : NSObject

@property (readonly) long long era;
@property (readonly) long long year;
@property (readonly) long long month;
@property (readonly) long long day;
@property (readonly) long long int64Representation;
@property (readonly) long long int64RepresentationMask;

+ (id)distantFuture;
+ (id)distantPast;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dateComponents;
- (id)initWithDateComponents:(id)a0;
- (id)initWithUniversalDate:(id)a0 calendar:(id)a1;
- (id)initWithInt64Representation:(long long)a0;

@end
