@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)firstObject;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)lastObject;
- (id)objectAtIndex:(long long)a0;
- (id)dequeueObject;
- (id)enqueueObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 objects:(id)a1;

@end
