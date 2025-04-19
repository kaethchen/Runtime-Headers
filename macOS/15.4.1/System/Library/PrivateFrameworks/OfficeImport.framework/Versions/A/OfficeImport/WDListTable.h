@class WDDocument, NSMutableDictionary, WDList, NSMutableArray;

@interface WDListTable : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLists;
    NSMutableDictionary *mListMapById;
    WDList *mNullList;
    WDList *mDefaultList;
}

- (id)description;
- (void).cxx_destruct;
- (id)lists;
- (id)initWithDocument:(id)a0;
- (id)listWithListId:(int)a0;
- (id)listAt:(unsigned long long)a0;
- (id)addListWithListId:(int)a0 listDefinitionId:(int)a1;
- (unsigned long long)listCount;

@end
