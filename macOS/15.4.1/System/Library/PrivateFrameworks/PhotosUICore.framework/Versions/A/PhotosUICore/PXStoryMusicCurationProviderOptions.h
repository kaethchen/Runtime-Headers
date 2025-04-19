@class NSSet;

@interface PXStoryMusicCurationProviderOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSSet *categories;
@property (nonatomic) unsigned long long logContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addCategory:(id)a0;

@end
