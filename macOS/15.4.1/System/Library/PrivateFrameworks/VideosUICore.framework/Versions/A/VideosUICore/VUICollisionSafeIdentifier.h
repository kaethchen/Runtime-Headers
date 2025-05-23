@class NSObject;
@protocol NSCopying;

@interface VUICollisionSafeIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *rootIdentifier;
@property (nonatomic) unsigned long long collisionCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootIdentifier:(id)a0 collisionCount:(unsigned long long)a1;

@end
