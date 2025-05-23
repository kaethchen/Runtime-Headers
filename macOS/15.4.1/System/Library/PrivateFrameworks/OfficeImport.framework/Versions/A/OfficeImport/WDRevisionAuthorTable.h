@class WDDocument, NSMutableArray;

@interface WDRevisionAuthorTable : NSObject {
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

- (id)description;
- (void).cxx_destruct;
- (id)authors;
- (id)initWithDocument:(id)a0;
- (void)addAuthor:(id)a0;
- (unsigned long long)authorAddLookup:(id)a0;
- (id)authorAt:(unsigned long long)a0;
- (unsigned long long)authorCount;

@end
