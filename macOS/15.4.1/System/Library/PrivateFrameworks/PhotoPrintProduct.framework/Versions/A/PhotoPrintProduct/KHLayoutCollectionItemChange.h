@class NSIndexPath;

@interface KHLayoutCollectionItemChange : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSIndexPath *sourceIndexPath;
@property (readonly, nonatomic) NSIndexPath *targetIndexPath;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 sourceIndexPath:(id)a1 targetIndexPath:(id)a2;

@end
