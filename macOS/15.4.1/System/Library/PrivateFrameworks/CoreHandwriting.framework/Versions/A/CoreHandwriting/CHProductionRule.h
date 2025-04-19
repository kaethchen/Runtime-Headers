@class NSString;

@interface CHProductionRule : NSObject

@property (copy, nonatomic) NSString *leftNode;
@property (copy, nonatomic) NSString *rightNode1;
@property (copy, nonatomic) NSString *rightNode2;
@property (nonatomic) double probability;

- (id)description;
- (void).cxx_destruct;
- (id)key;
- (id)initWithLeftNode:(id)a0 rightNode:(id)a1;
- (BOOL)isTerminal;
- (id)initWithLeftNode:(id)a0 rightNode1:(id)a1 rightNode2:(id)a2;
- (id)initWithLeftNode:(id)a0 rightNode1:(id)a1 rightNode2:(id)a2 probability:(double)a3;
- (id)initWithLeftNode:(id)a0 rightNode:(id)a1 probability:(double)a2;

@end
