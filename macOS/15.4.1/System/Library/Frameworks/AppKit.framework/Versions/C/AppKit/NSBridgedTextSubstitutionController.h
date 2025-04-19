@class NSString, NSTextInputContext, __NSDelegateObservingTextView;

@interface NSBridgedTextSubstitutionController : NSObject <NSTextViewDelegate, NSTextStorageDelegate> {
    NSTextInputContext *_inputContext;
    __NSDelegateObservingTextView *_textView;
}

@property (getter=isContentsValid) BOOL contentsValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)capitalizeWord:(id)a0;
- (id)_findSmartInsertDeleteMenuItemInMenu:(id)a0;
- (id)_mainSmartInsertDeleteMenuItem;
- (void)_prepareForTextInputStates;
- (void)addLinksInSelection:(id)a0;
- (void)checkTextInDocument:(id)a0;
- (void)checkTextInSelection:(id)a0;
- (void)convertToFullWidth:(id)a0;
- (void)convertToHalfWidth:(id)a0;
- (void)convertToSimplifiedChinese:(id)a0;
- (void)convertToTraditionalChinese:(id)a0;
- (id)initWithTextInputContext:(id)a0;
- (void)lowercaseWord:(id)a0;
- (void)orderFrontSubstitutionsPanel:(id)a0;
- (void)prepareContextMenu:(id)a0;
- (void)replaceDashesInSelection:(id)a0;
- (void)replaceQuotesInSelection:(id)a0;
- (void)replaceTextInSelection:(id)a0;
- (void)textStorage:(id)a0 didProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (void)uppercaseWord:(id)a0;
- (BOOL)validateMenuItem:(id)a0;

@end
