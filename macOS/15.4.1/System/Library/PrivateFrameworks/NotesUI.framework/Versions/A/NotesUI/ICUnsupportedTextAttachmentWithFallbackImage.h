@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (id)fileType;
- (id)attachmentAsNSTextAttachment;
- (BOOL)supportsMultipleThumbnailsOnSameLine;

@end
