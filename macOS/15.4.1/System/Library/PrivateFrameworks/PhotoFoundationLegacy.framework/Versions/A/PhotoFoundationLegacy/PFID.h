@interface PFID : NSObject

@property _Atomic long long identifier;

+ (void)initialize;
+ (id)PFID;

- (id)init;
- (long long)nextID;
- (id)initWithIntegerValue:(long long)a0;
- (long long)currentID;
- (void)setNextID:(long long)a0;

@end
