@interface _NSConstantDate : NSDate

+ (id)alloc;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (unsigned long long)retainCount;
- (double)timeIntervalSinceReferenceDate;

@end
