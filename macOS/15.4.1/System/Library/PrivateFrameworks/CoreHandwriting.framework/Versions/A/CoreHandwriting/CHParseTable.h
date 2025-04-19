@class NSMutableArray;

@interface CHParseTable : NSObject {
    NSMutableArray *_table;
}

@property (nonatomic) long long inputLength;
@property (nonatomic) long long grammarSize;

- (void).cxx_destruct;
- (void)clear:(long long)a0;
- (void)addCell:(id)a0;
- (id)cellWithLength:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 nonTerminal:(id)a2;
- (id)cellsByRangeForLength:(long long)a0;
- (id)cellsOfLength:(long long)a0;
- (id)initWithInputLength:(long long)a0 grammarSize:(long long)a1;
- (id)startCellsWithLength:(long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startSymbol:(id)a2;

@end
