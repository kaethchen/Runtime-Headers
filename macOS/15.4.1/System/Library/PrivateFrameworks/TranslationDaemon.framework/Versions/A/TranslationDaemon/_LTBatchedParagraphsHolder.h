@class NSMutableDictionary, NSMutableArray;

@interface _LTBatchedParagraphsHolder : NSObject {
    NSMutableDictionary *_paragraphs;
    NSMutableArray *_orderedParagraphIds;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)paragraphs;
- (void)completeAllAndCleanWithError:(id)a0;
- (void)insertParagraph:(id)a0 withId:(id)a1;
- (id)paragraphWithId:(id)a0;
- (void)removeParagraphWithId:(id)a0;

@end
