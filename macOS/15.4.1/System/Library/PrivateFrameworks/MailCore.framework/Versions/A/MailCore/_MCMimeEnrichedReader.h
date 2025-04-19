@class NSMutableArray, NSMutableString;

@interface _MCMimeEnrichedReader : NSObject {
    struct { unsigned short buffer[64]; struct __CFString *theString; unsigned short *directUniCharBuffer; char *directCStringBuffer; struct { long long location; long long length; } rangeToBuffer; long long bufferedRangeStart; long long bufferedRangeEnd; } _inputBuffer;
    long long _currentIndex;
    long long _inputLength;
    unsigned int _noFillLevel : 30;
    unsigned char _eatOneNewline : 1;
    unsigned char _insideComment : 1;
    long long _lastQuoteLevel;
    NSMutableArray *_commandStack;
    NSMutableString *_outputString;
    NSMutableString *_outputBuffer;
    BOOL outputShouldBeHTML;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)punctuationSet;
- (id)copyCommand;
- (id)currentFont;
- (void)appendStringToBuffer:(id)a0;
- (void)beginCommand:(id)a0;
- (void)closeUpQuoting;
- (void)convertEnrichedString:(id)a0 intoOutputString:(id)a1;
- (void)convertEnrichedString:(id)a0 intoPlainOutputString:(id)a1;
- (void)convertRichTextString:(id)a0 intoOutputString:(id)a1;
- (id)copyNextTokenWithDelimiters:(id)a0;
- (void)endCommand:(id)a0;
- (void)fixConsecutiveSpaces:(id)a0;
- (void)handleNoParameterCommand:(const struct { id x0; BOOL x1; BOOL x2; BOOL x3; char x4; } *)a0;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (id)parenthesesSet;
- (void)parseParameterString:(id)a0;
- (long long)readTokenInto:(id *)a0;
- (void)resetStateWithString:(id)a0 outputString:(id)a1;
- (void)setupFontStackEntry:(id)a0;

@end
