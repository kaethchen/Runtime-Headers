@class NSArray, TransportInfo;

@interface AMSNetworkBoxGroup : NSObject <NSCopying>

@property (copy) TransportInfo *info;
@property (copy) NSArray *boxList;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualTo:(id)a0;
- (void)sortBoxListWithSortDescriptors:(id)a0;
- (id)initWithInfo:(id)a0 boxList:(id)a1;

@end
