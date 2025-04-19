@class NSString, NSMutableArray;

@interface ABTableEntry : NSObject

@property (readonly, copy) NSString *recordIdentifier;
@property (retain, nonatomic) NSMutableArray *children;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canSelect;
- (BOOL)hasChildren;
- (BOOL)canDrag;
- (BOOL)canSwipeToDelete;

@end
