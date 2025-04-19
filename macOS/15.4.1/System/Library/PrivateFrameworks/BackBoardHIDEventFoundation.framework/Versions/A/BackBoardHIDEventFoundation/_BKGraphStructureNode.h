@class NSString, NSMutableArray;

@interface _BKGraphStructureNode : NSObject {
    _BKGraphStructureNode *_supernode;
    NSMutableArray *_subnodes;
    NSString *_label;
}

- (id)init;
- (void).cxx_destruct;

@end
