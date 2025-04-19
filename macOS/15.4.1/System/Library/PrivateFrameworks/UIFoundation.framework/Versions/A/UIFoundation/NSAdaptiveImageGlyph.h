@class NSString, NSTextAttachment, CTAdaptiveImageGlyph, UTType, NSArray, NSData, NSFileWrapper;

@interface NSAdaptiveImageGlyph : NSObject <NSCopying, NSSecureCoding, CTAdaptiveImageProviding>

@property (class, readonly) BOOL _readsAdaptiveImageGlyphFromDocumentFormats;
@property (class, readonly) BOOL prefersTextAttachment;
@property (class, readonly) BOOL prefersEmojiImageTextAttachment;
@property (class, readonly) UTType *contentType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSFileWrapper *_fallbackFileWrapper;
@property (readonly) CTAdaptiveImageGlyph *_CTAdaptiveImageGlyph;
@property (readonly) NSTextAttachment *nominalTextAttachment;
@property (readonly) NSArray *strikes;
@property (readonly) NSData *imageContent;
@property (readonly) NSString *contentIdentifier;
@property (readonly, copy) NSString *contentDescription;

+ (void)flushInstanceCache;
+ (void)setPrefersEmojiImageTextAttachment:(BOOL)a0;
+ (void)setPrefersTextAttachment:(BOOL)a0;
+ (id)contentTypeIdentifier;
+ (id)contentTypeUTI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_configuredFileWrapperForAttributes:(id)a0;
- (struct CGSize { double x0; double x1; })_imageSizeForAttributes:(id)a0;
- (struct CGImage { } *)imageForPointSize:(double)a0 scaleFactor:(double)a1 imageOffset:(out struct CGPoint { double x0; double x1; } *)a2 imageSize:(out struct CGSize { double x0; double x1; } *)a3;
- (struct CGImage { } *)imageForProposedSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 imageOffset:(out struct CGPoint { double x0; double x1; } *)a2 imageSize:(out struct CGSize { double x0; double x1; } *)a3;
- (id)initWithContentIdentifier:(id)a0;
- (id)initWithFileWrapper:(id)a0;
- (id)initWithImageContent:(id)a0;
- (id)initWithCTAdaptiveImageGlyph:(id)a0;

@end
