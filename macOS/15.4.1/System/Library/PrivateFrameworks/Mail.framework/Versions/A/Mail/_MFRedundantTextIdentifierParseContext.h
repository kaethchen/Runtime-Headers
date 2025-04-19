@class NSDictionary, _MFRedundantTextIdentifierAttachmentContext;

@interface _MFRedundantTextIdentifierParseContext : NSObject

@property (readonly, nonatomic) struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *buffer;
@property (readonly, nonatomic) long long bufferStartIndex;
@property (readonly, nonatomic) long long bufferLength;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long startMatchIndexForCurrentLine;
@property (nonatomic) BOOL searchInForwardDirection;
@property (readonly, nonatomic) unsigned short startTagCharacter;
@property (readonly, nonatomic) unsigned short endTagCharacter;
@property (readonly, nonatomic) unsigned short startEntityCharacter;
@property (readonly, nonatomic) unsigned short endEntityCharacter;
@property (nonatomic) BOOL isParsingEntity;
@property (nonatomic) unsigned short entityValueCharacter;
@property (nonatomic) long long entityStartIndex;
@property (nonatomic) BOOL isParsingAttachment;
@property (retain, nonatomic) _MFRedundantTextIdentifierAttachmentContext *attachmentContext;
@property (nonatomic) long long attachmentStartIndex;
@property (nonatomic) long long attachmentEndIndex;
@property (nonatomic) BOOL attachmentIsTag;
@property (readonly, copy, nonatomic) NSDictionary *attachmentContextsByURL;

+ (void)normalizeEntitiesInString:(id)a0;
+ (id)normalizedStringForEntity:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (long long)advancePastNonContentTagsAndWhitespaceParsingAttachmentPlaceholders:(BOOL)a0;
- (BOOL)advanceToClosingTagMatchingOpenTag:(struct { long long x0; long long x1; })a0;
- (BOOL)advanceToEndOfAttachmentPlaceholderIfExists;
- (BOOL)advanceToEndOfCommentIfExists;
- (long long)advanceToEndOfLine;
- (long long)advanceToEndOfLine:(BOOL *)a0;
- (unsigned short)charFromBufferAtIndex:(long long)a0;
- (id)charactersInMessageWithCurrentIndexMarked;
- (unsigned short)currentCharFromBuffer;
- (void)incrementCurrentIndex;
- (void)incrementCurrentIndexBy:(long long)a0;
- (id)initWithBuffer:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a0 bufferStartIndex:(long long)a1 bufferLength:(long long)a2 searchInForwardDirection:(BOOL)a3 attachmentContextsByURL:(id)a4;
- (BOOL)isBlockLevelTag:(struct { long long x0; long long x1; })a0;
- (unsigned short)nextCharacterToMatch;
- (id)parseAndSanitizeAttributionLineInRange:(struct { long long x0; long long x1; } *)a0;
- (BOOL)parseAttachmentFilenameFromAttribute:(struct __CFString { } *)a0;
- (unsigned short)readAndAdvanceToEndOfEntityIfExists;
- (struct { long long x0; long long x1; })readAndAdvanceToEndOfTagIsCloseTag:(BOOL *)a0 shouldParseAttachmentTags:(BOOL)a1;
- (struct { long long x0; long long x1; })readElementIsCloseElement:(BOOL *)a0 shouldParseAttachmentTags:(BOOL)a1;
- (long long)remainingCharacters;
- (void)resetCurrentIndex;

@end
