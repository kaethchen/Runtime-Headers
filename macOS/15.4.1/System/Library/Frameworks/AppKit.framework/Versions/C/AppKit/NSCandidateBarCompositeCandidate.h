@class NSImage, NSAttributedString;

@interface NSCandidateBarCompositeCandidate : NSObject <NSCopying> {
    NSImage *_image;
    NSAttributedString *_attributedString;
    double _spacing;
    unsigned char _flags;
}

@property (readonly, copy) NSImage *image;
@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) double spacing;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)string;
- (id)initWithImage:(id)a0 attributedString:(id)a1;
- (BOOL)hasContent;
- (id)initWithImage:(id)a0 attributedString:(id)a1 spacing:(double)a2;
- (id)initWithImage:(id)a0 attributedString:(id)a1 spacing:(double)a2 isSimpleCandidate:(BOOL)a3 isEmojiCandidate:(BOOL)a4;
- (BOOL)isEmojiCandidate;
- (BOOL)isSimpleCandidate;

@end
