@interface NSImageKitViewTextAttachmentCellHelper : NSViewTextAttachmentCellHelper {
    unsigned long long _charIndex;
}

- (void)dealloc;
- (unsigned long long)characterIndex;
- (id)initWithView:(id)a0 layoutManager:(id)a1 characterIndex:(unsigned long long)a2 attachmentCell:(id)a3;
- (void)setCharacterIndex:(unsigned long long)a0;
- (void)viewFrameChanged:(id)a0;

@end
