@class VKTextRange, VKCImageTextSelectionView_macOS;

@interface VKCImageTextSelectionViewCommandHandler : NSObject

@property (retain, nonatomic) VKTextRange *startingRangeForExtending;
@property (nonatomic) BOOL isExtendingRange;
@property (weak, nonatomic) VKCImageTextSelectionView_macOS *textSelectionView;

- (void).cxx_destruct;
- (void)moveWordLeftAndModifySelection:(id)a0;
- (void)moveUp:(id)a0;
- (void)copy:(id)a0;
- (void)moveBackward:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveDownAndModifySelection:(id)a0;
- (void)moveForward:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveLeftAndModifySelection:(id)a0;
- (void)moveParagraphBackwardAndModifySelection:(id)a0;
- (void)moveParagraphForwardAndModifySelection:(id)a0;
- (void)moveRight:(id)a0;
- (void)moveRightAndModifySelection:(id)a0;
- (void)moveToBeginningOfDocument:(id)a0;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)a0;
- (void)moveToEndOfDocument:(id)a0;
- (void)moveToEndOfDocumentAndModifySelection:(id)a0;
- (void)moveUpAndModifySelection:(id)a0;
- (void)moveWordBackward:(id)a0;
- (void)moveWordForward:(id)a0;
- (void)moveWordLeft:(id)a0;
- (void)moveWordRight:(id)a0;
- (void)moveWordRightAndModifySelection:(id)a0;
- (void)selectAll:(id)a0;
- (void)adjustSelectionWithType:(unsigned long long)a0 direction:(unsigned long long)a1 extendSelection:(BOOL)a2;
- (void)clearStartRangeIfNecessaryForSelectedRangeChange;
- (BOOL)handleCommandForSelector:(SEL)a0;
- (unsigned long long)indexOfNextNonWhitespaceCharacterFromIndex:(unsigned long long)a0 inDirection:(unsigned long long)a1 forString:(id)a2;
- (id)rangeOfType:(unsigned long long)a0 inDirection:(unsigned long long)a1 documentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 fromIndex:(unsigned long long)a3 recognitionResult:(id)a4 string:(id)a5;

@end
