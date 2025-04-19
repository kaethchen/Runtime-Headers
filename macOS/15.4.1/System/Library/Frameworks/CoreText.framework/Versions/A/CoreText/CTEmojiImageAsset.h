@class NSArray, NSData, NSString;

@interface CTEmojiImageAsset : NSObject <NSCopying>

@property (copy) NSArray *strikes;
@property (copy) NSData *heicData;
@property (copy) NSString *contentIdentifier;
@property (copy) NSString *shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)imageData;
- (id)_IPTCDictionaryWithProvenanceInfo:(id)a0;
- (id)_TIFFDictionaryWithEmojiInfoAndAlignmentInset:(struct CGSize { double x0; double x1; })a0;
- (id)_attachmentProperties;
- (void)_finalizeImageData;
- (id)_imagePropertiesForImage:(struct CGImage { } *)a0 withAlignmentInset:(struct CGSize { double x0; double x1; })a1 provenanceInfo:(id)a2;
- (id)initWithContentIdentifier:(id)a0 shortDescription:(id)a1 strikeImages:(id)a2;
- (id)preferredFilenameForData;

@end
