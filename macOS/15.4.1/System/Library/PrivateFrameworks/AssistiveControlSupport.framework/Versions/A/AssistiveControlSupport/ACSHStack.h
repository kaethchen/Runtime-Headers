@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying>

@property (retain) NSMutableArray *_queue;
@property (nonatomic) BOOL pushMovesDuplicatesToTop;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)clear;
- (id)peek;
- (void)push:(id)a0;
- (id)pop;

@end
