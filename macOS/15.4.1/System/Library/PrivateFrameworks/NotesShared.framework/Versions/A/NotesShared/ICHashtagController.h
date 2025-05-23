@class ICNote, NSMutableDictionary, ICAutoCompleteSuggestionsViewController, ICTableColumnTextView, ICAttachmentInsertionController, NSMutableSet, ICHashtagsNode, NSTextView;
@protocol ICHashtagKeyboardDelegate, ICHashtagAnalyticsDelegate;

@interface ICHashtagController : NSObject

@property (weak, nonatomic) ICNote *note;
@property (retain, nonatomic) NSMutableDictionary *hashtagSuggestionsDictionary;
@property (retain, nonatomic) NSMutableSet *hashtagsNames;
@property (retain, nonatomic) ICHashtagsNode *hashtagsTree;
@property (nonatomic) unsigned long long maxNameLength;
@property (retain, nonatomic) ICAutoCompleteSuggestionsViewController *controller;
@property (readonly, nonatomic) BOOL allowsHashtag;
@property (nonatomic) BOOL isUpdatingKeyboard;
@property (weak, nonatomic) id<ICHashtagKeyboardDelegate> hashtagKeyboardDelegate;
@property (weak, nonatomic) id<ICHashtagKeyboardDelegate> hashtagTableKeyboardDelegate;
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editedRange;
@property (readonly, nonatomic) unsigned long long maxLengthOfStringForCheckingHashtag;
@property (weak, nonatomic) ICTableColumnTextView *tableTextView;
@property (weak, nonatomic) NSTextView *textView;
@property (weak, nonatomic) id<ICHashtagAnalyticsDelegate> analyticsDelegate;

+ (BOOL)isValidPostfixCharacter:(unsigned short)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 appendingSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasValidPostfixCharacterForString:(id)a1;
+ (BOOL)isBeginningHashtagAtSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 languageHasSpaces:(BOOL)a2;
+ (BOOL)isValidPrefixCharacter:(unsigned short)a0 languageHasSpaces:(BOOL)a1;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasValidPrefixCharacterForString:(id)a1 languageHasSpaces:(BOOL)a2;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 isPrefixedWithHashtagForString:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfLastCharacterInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (void)setShouldAutoConvertToTag:(BOOL)a0;
+ (BOOL)shouldAutoConvertToTag;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)accountWasDeleted:(id)a0;
- (void)associateHashtagSuggestion:(id)a0 withKey:(id)a1;
- (id)checkForHashtagInString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 languageHasSpaces:(BOOL)a3;
- (void)crossAppHashtagDidChange:(id)a0;
- (id)hashtagSuggestionsForKey:(id)a0;
- (void)updateHashtagsAssociations;
- (void)updateNoteHashtags;

@end
