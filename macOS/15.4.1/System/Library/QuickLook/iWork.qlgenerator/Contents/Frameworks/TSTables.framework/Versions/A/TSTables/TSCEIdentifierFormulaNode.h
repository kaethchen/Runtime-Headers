@class NSString, NSArray, NSMutableArray;

@interface TSCEIdentifierFormulaNode : TSCEFormulaNode {
    NSMutableArray *_components;
}

@property (readonly, nonatomic) NSString *fullIdentifier;
@property (readonly, nonatomic) unsigned long long componentCount;
@property (readonly, nonatomic) NSString *lastIdentifierComponent;
@property (readonly, nonatomic) NSArray *identifierComponents;
@property (nonatomic) unsigned int symbol;
@property (retain, nonatomic) NSString *aggregateFunction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)addIdentifierComponent:(id)a0;
- (void)appendToLastComponent:(id)a0;
- (BOOL)isIdentifierNode;
- (id)lastComponentWithWhitespaceAppended;
- (id)resolveIdentifier:(id)a0 hostTable:(id)a1 baseHostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 symbolTable:(void *)a3;

@end
