@class NSString, NSMutableString, NSMutableArray;

@interface TIZhuyinInputManager : NSObject

@property unsigned short syllableConsonantBuffer;
@property unsigned short syllableMedialBuffer;
@property unsigned short syllableVowelBuffer;
@property unsigned short syllableToneBuffer;
@property (retain) NSMutableString *inputBuffer;
@property (retain) NSMutableArray *inputBufferSplittingLengths;
@property (retain) NSMutableArray *composedBufferSplittingLengths;
@property (retain) NSMutableString *composedBuffer;
@property BOOL leftSingleQuotationMarkInserted;
@property BOOL leftDoubleQuotationMarkInserted;
@property (readonly) unsigned long long bufferSplittingLengthsIndex;
@property (readonly) unsigned long long composedBufferCursorLocation;
@property (readonly) BOOL syllableBuffersValid;
@property (readonly) unsigned long long syllableBuffersAggregateLength;
@property (readonly) NSString *syllableBuffersAggregateString;
@property unsigned long long inputCursorLocation;
@property (readonly, retain) NSString *composedText;
@property (readonly) unsigned long long cursorLocation;
@property (readonly) BOOL syllableBuffersOccupied;
@property (readonly) BOOL isCursorAtEnd;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)convertToFullWidth:(id)a0;
- (BOOL)deleteFromInput;
- (BOOL)addZhuyinInput:(id)a0;
- (BOOL)addNonZhuyinInput:(id)a0;
- (BOOL)addZhuyinInput:(id)a0 withUpdatingComposedTextToClient:(BOOL)a1;
- (BOOL)forwardDeleteFromInput;
- (id)inputStringForCharacters:(id)a0;
- (id)readingsLengths:(id)a0;
- (void)resetSyllableBuffers;
- (BOOL)revertCurrentCharacterToTonelessZhuyin;
- (BOOL)shouldDirectlyCommitInput:(id)a0;
- (unsigned long long)inputBufferIndexOf:(unsigned long long)a0;
- (void)moveCursorBackward;
- (void)moveCursorForward;
- (void)updateWithCandidate:(id)a0 isWholeInputCandidate:(BOOL)a1;

@end
