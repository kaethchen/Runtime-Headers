@class NSImage, NSAttributedString, NSColor;

@interface NSCandidateTextField : NSTextField {
    NSColor *_candidateColor;
    long long correctionPanelType;
}

@property BOOL trimOnLeft;
@property BOOL trimOnRight;
@property (retain) NSImage *candidateImage;
@property (retain) NSAttributedString *candidateString;
@property long long correctionPanelType;

+ (Class)cellClass;

- (void)dealloc;
- (id)stringValue;
- (id)addImage:(id)a0 toAttributedString:(id)a1;
- (void)setAttributedCorrection:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)textAttachmentUsingImage:(id)a0;

@end
