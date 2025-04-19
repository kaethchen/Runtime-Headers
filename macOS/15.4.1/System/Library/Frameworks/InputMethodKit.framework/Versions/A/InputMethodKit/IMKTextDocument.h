@class NSMutableString;

@interface IMKTextDocument : IMKAbstractTextDocument

@property (nonatomic) unsigned long long cursorPosition;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly, nonatomic) NSMutableString *committedText;
@property (readonly, nonatomic) unsigned long long composingTextStartPosition;
@property (readonly, nonatomic) unsigned long long composingTextEndPosition;
@property (readonly, nonatomic) unsigned long long selectedTextEndPosition;
@property (readonly, nonatomic) IMKTextDocument *composingTextInternal;
@property (readonly, nonatomic) IMKTextDocument *composingText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } composingTextRange;
@property (readonly, nonatomic) unsigned long long length;

+ (id)keyPathsForValuesAffectingText;
+ (id)textDocumentWithTextDocument:(id)a0 surroundingCharactersToCopy:(unsigned long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)hasSelection;
- (id)selectedText;
- (BOOL)_hasComposingText;
- (id)characters:(unsigned long long)a0 after:(long long)a1 untilCharacterFromSet:(id)a2;
- (id)characters:(unsigned long long)a0 before:(long long)a1 untilCharacterFromSet:(id)a2;
- (void)clearAllContents;
- (void)clearAllContentsExceptComposingText;
- (void)commitComposingText;
- (unsigned long long)deleteCharacters:(unsigned long long)a0 after:(long long)a1;
- (unsigned long long)deleteCharacters:(unsigned long long)a0 afterCursorPosition:(unsigned long long)a1;
- (unsigned long long)deleteCharacters:(unsigned long long)a0 before:(long long)a1;
- (BOOL)hasContentBefore:(long long)a0;
- (id)initWithTextDocument:(id)a0 surroundingCharactersToCopy:(unsigned long long)a1;
- (id)initWithTraits:(id)a0 candidateMenu:(id)a1;
- (void)insertCharacters:(id)a0 after:(long long)a1;
- (void)insertCharacters:(id)a0 atCursorPosition:(unsigned long long)a1;
- (void)insertCharacters:(id)a0 before:(long long)a1;
- (void)insertCharactersAtCursor:(id)a0;
- (unsigned long long)moveCursorByCharacterCount:(long long)a0;
- (id)recomposeCharacters:(unsigned long long)a0 after:(long long)a1 untilCharacterFromSet:(id)a2;
- (id)recomposeCharacters:(unsigned long long)a0 before:(long long)a1 untilCharacterFromSet:(id)a2;
- (void)replaceCharactersAtCursor:(unsigned long long)a0 withCharacters:(id)a1;
- (void)selectCharacters:(unsigned long long)a0 after:(long long)a1;
- (void)selectCharacters:(unsigned long long)a0 before:(long long)a1;
- (void)selectCodeUnits:(unsigned long long)a0 after:(long long)a1;
- (void)selectCodeUnits:(unsigned long long)a0 before:(long long)a1;

@end
