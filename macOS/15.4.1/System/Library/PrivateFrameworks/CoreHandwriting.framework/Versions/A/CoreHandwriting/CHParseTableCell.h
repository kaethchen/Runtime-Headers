@class CHNonTerminal, CHTerminal, CHParseTree, NSMutableArray, CHProductionRule;

@interface CHParseTableCell : NSObject

@property (retain, nonatomic) CHNonTerminal *nonTerminal;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inputRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } terminalsRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (readonly, nonatomic) long long length;
@property (nonatomic) long long combinations;
@property (nonatomic) long long order;
@property (nonatomic) long long terminalsCount;
@property (nonatomic) double probability;
@property (retain, nonatomic) CHProductionRule *rule;
@property (retain, nonatomic) CHTerminal *terminal;
@property (retain, nonatomic) CHParseTableCell *leftChild;
@property (retain, nonatomic) CHParseTableCell *rightChild;
@property (retain, nonatomic) CHParseTree *parseTree;
@property (retain, nonatomic) NSMutableArray *replacedCells;

+ (id)stringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_terminalsRangeRecursive:(id)a0;
- (id)initNonTerminal:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
