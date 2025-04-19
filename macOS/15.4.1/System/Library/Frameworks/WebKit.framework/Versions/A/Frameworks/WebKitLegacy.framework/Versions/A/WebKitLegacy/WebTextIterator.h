@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (id)initWithRange:(id)a0;
- (id)currentText;
- (void)advance;
- (id)currentRange;
- (BOOL)atEnd;
- (id)currentNode;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;

@end
