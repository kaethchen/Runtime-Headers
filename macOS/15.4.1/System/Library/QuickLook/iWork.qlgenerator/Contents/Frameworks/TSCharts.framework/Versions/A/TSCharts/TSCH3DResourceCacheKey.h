@class TSCH3DResource, TSCH3DResourceLoader;

@interface TSCH3DResourceCacheKey : NSObject <NSCopying> {
    long long _virtualScreen;
}

@property (readonly, nonatomic) TSCH3DResourceLoader *loader;
@property (readonly, nonatomic) TSCH3DResource *resource;

+ (id)keyWithLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLoader:(id)a0 resource:(id)a1 virtualScreen:(long long)a2;

@end
