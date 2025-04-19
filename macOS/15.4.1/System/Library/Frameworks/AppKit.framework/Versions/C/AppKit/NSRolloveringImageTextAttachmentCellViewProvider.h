@interface NSRolloveringImageTextAttachmentCellViewProvider : NSTextAttachmentCellViewProvider {
    BOOL _loaded;
}

- (void)dealloc;
- (void)loadView;

@end
