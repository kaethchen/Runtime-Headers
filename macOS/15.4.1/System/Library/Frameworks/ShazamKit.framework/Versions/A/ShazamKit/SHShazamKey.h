@class NSString;

@interface SHShazamKey : NSObject <NSCopying>

@property (readonly, copy) NSString *validatedKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)isShazamKeyValid:(id)a0;

@end
