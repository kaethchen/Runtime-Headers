@class CHParseTreeNode;

@interface CHNonTerminal : CHParseTreeNode

@property (readonly, nonatomic) CHParseTreeNode *leftNode;
@property (readonly, nonatomic) CHParseTreeNode *rightNode;

- (id)description;
- (void).cxx_destruct;
- (long long)getTerminalsCount;
- (id)initWithName:(id)a0 leftNode:(id)a1 rightNode:(id)a2;

@end
