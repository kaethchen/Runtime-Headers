@class SGTSuggestion, NSTokenFieldCell;

@interface SGTSearchFieldCellReserved : NSObject {
    NSTokenFieldCell *tokenFieldCell;
    SGTSuggestion *suggestion;
    BOOL useTokens;
    BOOL _cancelInProgress;
}

- (void).cxx_destruct;

@end
