@class _ICNFMCMimeEnrichedState, NSString, _ICNFMCMimeEnrichedWriterCommandStackEntry, NSAttributedString, NSFont;

@interface _ICNFMCMimeEnrichedWriter : NSObject {
    NSAttributedString *_attributedString;
    NSString *_string;
    struct { unsigned short buffer[64]; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } _stringBuffer;
    NSFont *_defaultFont;
    NSFont *_defaultFixedPitchFont;
    double _defaultPointSize;
    _ICNFMCMimeEnrichedWriterCommandStackEntry *_commandStack;
    _ICNFMCMimeEnrichedWriterCommandStackEntry *_topOfStack;
    _ICNFMCMimeEnrichedState *_currentState;
    unsigned long long _currentLineStart;
    unsigned long long _lastSpace;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)pushStackEntry:(id)a0;
- (void)appendTextFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toString:(id)a1;
- (id)convertAttributedString:(id)a0;
- (void)popStackEntry;
- (void)pushEntryForCommand:(id)a0 withParameter:(id)a1 output:(id)a2;
- (void)setState:(id)a0 fromAttributes:(id)a1;
- (void)setState:(id)a0 fromStackEntry:(id)a1;
- (void)updateOutput:(id)a0 forAttributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
