@class NSArray;
@protocol UnifiedFieldPasteboardDriver;

@interface UnifiedFieldPasteboardEngine : NSObject

@property (readonly, weak, nonatomic) id<UnifiedFieldPasteboardDriver> pasteboardDriver;
@property (readonly, nonatomic) NSArray *writablePasteboardTypes;

- (void).cxx_destruct;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (BOOL)_allTextSelected;
- (BOOL)_isReflectingSearchTermsWithAllTextSelected;
- (id)_replacementStringforWritingToPasteboard;
- (id)_selectedTextAsURL;
- (BOOL)_shouldAttemptRichLinkDonation;
- (BOOL)_shouldWriteSearchTermsToPasteboardAsLink;
- (id)initWithPasteboardDriver:(id)a0;

@end
