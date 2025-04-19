@interface NSTokenAttachment : NSTextAttachment {
    id _delegate;
    BOOL _needsSeparator;
}

@property id delegate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)_needsSeparator;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)a0 inTextView:(id)a1;
- (id)_immediateActionAnimationControllerForRepresentedObject:(id)a0 inTextView:(id)a1;
- (void)_setNeedsSeparator:(BOOL)a0;
- (id)attachmentCell;
- (void)setAttachmentCell:(id)a0;

@end
