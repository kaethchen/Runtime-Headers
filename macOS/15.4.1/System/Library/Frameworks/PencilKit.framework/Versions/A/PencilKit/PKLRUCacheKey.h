@class NSObject;
@protocol NSCopying;

@interface PKLRUCacheKey : NSObject <NSCopying>

@property (copy, nonatomic) NSObject<NSCopying> *key;
@property (nonatomic) long long scaleFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
