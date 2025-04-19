@interface FCTimeControl : NSObject

@property BOOL enabled;
@property long long rangeType;

- (id)description;
- (BOOL)dateIsInEffect:(id)a0;

@end
