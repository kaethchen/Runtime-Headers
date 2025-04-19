@interface HKDataCollectorState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long collectionType;
@property (readonly) long long priority;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cloneWithNewPriority:(long long)a0;
- (id)cloneWithNewType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 priority:(long long)a1;

@end
