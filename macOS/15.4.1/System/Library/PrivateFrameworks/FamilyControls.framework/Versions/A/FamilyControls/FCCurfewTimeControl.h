@class FCTime;

@interface FCCurfewTimeControl : FCTimeControl

@property (retain) FCTime *start;
@property (retain) FCTime *end;

+ (id)curfewFromDictionary:(id)a0;
+ (id)curfewWithRange:(long long)a0 start:(id)a1 end:(id)a2 enabled:(BOOL)a3;
+ (id)weekdayDefault;
+ (id)weekendDefault;

- (void)dealloc;
- (id)description;
- (id)plistRepresentation;
- (id)range;
- (BOOL)dateIsInEffect:(id)a0;
- (id)initWithRange:(long long)a0 start:(id)a1 end:(id)a2;

@end
