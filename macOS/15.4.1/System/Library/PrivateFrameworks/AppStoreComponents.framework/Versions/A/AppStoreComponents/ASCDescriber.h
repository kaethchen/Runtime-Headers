@class NSMutableArray, NSObject;

@interface ASCDescriber : NSObject

@property (class, readonly) id nilObject;

@property (readonly, nonatomic) NSObject *object;
@property (readonly, nonatomic) NSMutableArray *properties;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)addBool:(BOOL)a0 withName:(id)a1;
- (void)addDouble:(double)a0 withName:(id)a1;
- (void)addInt64:(long long)a0 withName:(id)a1;
- (void)addInteger:(long long)a0 withName:(id)a1;
- (void)addObject:(id)a0 withName:(id)a1;
- (void)addSensitiveObject:(id)a0 withName:(id)a1;
- (void)addUInt64:(unsigned long long)a0 withName:(id)a1;
- (void)addUnsignedInteger:(unsigned long long)a0 withName:(id)a1;
- (id)describeObject;
- (id)describeProperties;
- (id)finalizeDescription;

@end
