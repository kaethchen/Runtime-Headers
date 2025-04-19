@class TSWPParagraphStyle, TSWPStorage, TSPObject, TSWPColumnStyle, TSWPDropCapStyle, TSWPListStyle;

@interface TSWPStoragePasteRules : NSObject {
    unsigned long long _actionFlags[6];
    struct { TSWPParagraphStyle *parStyle; TSPObject *section; TSWPColumnStyle *columnStyle; TSWPListStyle *listStyle; struct TSWPParagraphData { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parData; struct TSWPParagraphData { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parStartData; struct TSWPParagraphData { union { struct { unsigned int listStart; } ; struct { unsigned short level; unsigned short flags; } ; struct { unsigned short row; unsigned short column; } ; struct { int writingDirection; } ; struct { unsigned int _singleValue; } ; struct { unsigned short _first; unsigned short _second; } ; } ; } parBidiData; TSWPDropCapStyle *dropCapStyle; } _paragraphInfo[4];
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long lastFlag;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } srcLeadRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } srcTrailRange;
@property (nonatomic) BOOL mapDestTrailingCharacterProperties;
@property (retain, nonatomic) TSWPStorage *destStorage;
@property (nonatomic) unsigned long long sourceColumnStyleCount;
@property (nonatomic) unsigned long long sourceSectionCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addActionFlag:(unsigned long long)a0;
- (void)applyParagraph:(unsigned long long)a0 toCharIndex:(unsigned long long)a1 ioTransaction:(void *)a2;
- (void)didPasteWithIOTransaction:(void *)a0 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)mapCharacterProperties:(id)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ioTransaction:(void *)a2;
- (void)mapCharacterPropertiesFromParagraph:(unsigned long long)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 useParagraphProperties:(BOOL)a2 ioTransaction:(void *)a3;
- (void)setupFlagsForPastingSrcStorage:(id)a0 intoDestStorage:(id)a1 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 srcStylesAmbiguous:(BOOL)a3;
- (void)willPasteStorage:(id)a0 intoDestStorage:(id)a1 atDestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 srcStylesAmbiguous:(BOOL)a3;

@end
