@class MKImageAttachmentCell;

@interface MKImageTextAttachment : NSTextAttachment {
    MKImageAttachmentCell *_imageAttachmentCell;
}

@property (nonatomic) double verticalOffset;
@property (nonatomic) double maxHeight;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 verticalOffset:(double)a1;

@end
