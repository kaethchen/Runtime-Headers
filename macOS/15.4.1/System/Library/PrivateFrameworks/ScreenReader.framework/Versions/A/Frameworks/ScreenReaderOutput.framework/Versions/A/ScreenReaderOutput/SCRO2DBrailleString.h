@class NSArray;

@interface SCRO2DBrailleString : NSObject {
    NSArray *_brailleParagraphs;
    unsigned long long _identifier;
}

+ (id)brailleStringsFromBrailleData:(id)a0;

- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_wordRangeAtIndex:(unsigned long long)a0 inBraille:(id)a1;
- (id)brailleLinesForWidth:(unsigned long long)a0 indent:(unsigned long long)a1 focused:(BOOL)a2 wordWrap:(BOOL)a3;

@end
