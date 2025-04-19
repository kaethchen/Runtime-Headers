@interface _NS128bitWrapper : NSObject <NSCopying> {
    struct _double_quad_uint { unsigned long long high64; unsigned long long low64; } bits;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;

@end
