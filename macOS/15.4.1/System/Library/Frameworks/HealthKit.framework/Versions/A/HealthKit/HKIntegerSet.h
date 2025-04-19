@interface HKIntegerSet : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    struct __CFSet { } *_set;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSet:(id)a0;
- (id)initWithIndex:(long long)a0;
- (BOOL)containsInteger:(long long)a0;
- (void)enumerateIntegersUsingBlock:(id /* block */)a0;

@end
