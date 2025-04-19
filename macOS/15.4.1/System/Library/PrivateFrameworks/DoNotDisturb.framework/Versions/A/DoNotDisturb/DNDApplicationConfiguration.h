@class NSMutableSet;

@interface DNDApplicationConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, copy, nonatomic) NSMutableSet *allowedThreads;
@property (readonly, copy, nonatomic) NSMutableSet *deniedThreads;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)diffDescription;
- (id)_initWithMinimumBreakthroughUrgency:(unsigned long long)a0 allowedThreads:(id)a1 deniedThreads:(id)a2;

@end
