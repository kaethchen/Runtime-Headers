@interface TPPageIndexPath : NSObject <NSCopying>

@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long pageIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithSectionIndex:(unsigned long long)a0 pageIndex:(unsigned long long)a1;

@end
