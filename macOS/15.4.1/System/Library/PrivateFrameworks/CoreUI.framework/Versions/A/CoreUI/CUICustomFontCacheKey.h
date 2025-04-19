@class NSString;

@interface CUICustomFontCacheKey : NSObject <NSCopying> {
    NSString *_name;
    double _pointSize;
    unsigned long long _hash;
    BOOL _hasHash;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double pointSize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
