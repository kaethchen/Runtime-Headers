@class NSArray, SCRTable;

@interface SCRTableHeaderManager : NSObject {
    SCRTable *_table;
    NSArray *_headerElements;
    unsigned long long _focusedIndex;
}

@property (nonatomic) long long orientation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0;
- (void)_setHeaderElements:(id)a0;
- (void)clearHeaderElementsCache;
- (BOOL)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (struct CGPoint { double x0; double x1; })mouseInsertAfterChildElement:(id)a0;
- (struct CGPoint { double x0; double x1; })mouseInsertBeforeChildElement:(id)a0;
- (BOOL)moveFirstWithRequest:(id)a0;
- (BOOL)moveLastWithRequest:(id)a0;
- (BOOL)moveLeftWithRequest:(id)a0 allowFullWrapping:(BOOL)a1;
- (BOOL)moveRightWithRequest:(id)a0 allowFullWrapping:(BOOL)a1;
- (BOOL)moveToIndex:(unsigned long long)a0 request:(id)a1;

@end
