@interface TPPageGroupInfo : NSObject

@property (readonly, nonatomic) unsigned int pageIndex;
@property (readonly, nonatomic) int bgCount;
@property (readonly, nonatomic) int fgCount;
@property (readonly, nonatomic) int drawableCount;

- (id)initWithPageIndex:(unsigned int)a0 bgCount:(int)a1 fgCount:(int)a2 drawableCount:(int)a3;

@end
