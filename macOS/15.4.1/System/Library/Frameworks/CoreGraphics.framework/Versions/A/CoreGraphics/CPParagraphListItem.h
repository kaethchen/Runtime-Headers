@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {
    struct __CFArray { } *paragraphs;
}

@property (retain, nonatomic) CPList *list;
@property (nonatomic) int number;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)dispose;
- (void)addParagraph:(id)a0;
- (id)paragraphAtIndex:(unsigned int)a0;
- (unsigned int)paragraphCount;

@end
