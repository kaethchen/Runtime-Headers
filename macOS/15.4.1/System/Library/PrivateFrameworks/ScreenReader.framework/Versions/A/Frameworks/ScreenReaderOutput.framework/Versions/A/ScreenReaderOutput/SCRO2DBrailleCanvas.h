@class NSData, NSArray, SCRO2DBrailleCanvasDescriptor;

@interface SCRO2DBrailleCanvas : NSObject {
    NSArray *_pins;
    NSData *_imageData;
    NSData *_brailleTextData;
}

@property (readonly) SCRO2DBrailleCanvasDescriptor *descriptor;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) unsigned long long numberOfTextLines;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (unsigned long long)cellHeight;
- (BOOL)hasConsistentVerticalPinSpacing;
- (BOOL)hasConsistentHorizontalPinSpacing;
- (double)horizontalPinSpacing;
- (double)interCellHorizontalSpacing;
- (double)interCellVerticalSpacing;
- (double)verticalPinSpacing;
- (union { unsigned long long x0; float x1; })pinStateForX:(unsigned long long)a0 y:(unsigned long long)a1;
- (BOOL)skipPinBetweenCellsHorizontally;
- (void)_blitBMP;
- (void)_blitCell:(unsigned char)a0 AtX:(unsigned long long)a1 y:(unsigned long long)a2;
- (void)_blitText;
- (BOOL)_canBlitCellAtX:(unsigned long long)a0 y:(unsigned long long)a1;
- (void)_clearCells;
- (union { unsigned long long x0; float x1; })_fullyDownPinState;
- (union { unsigned long long x0; float x1; })_fullyUpPinState;
- (unsigned long long)_numberOfTextLines;
- (id)_pinForX:(unsigned long long)a0 y:(unsigned long long)a1;
- (unsigned long long)_textDisplayHeight;
- (void)_updateCells;
- (void)_updateTextCells;
- (unsigned long long)cellWidth;
- (id)debugAsciiCanvas;
- (unsigned long long)detentCount;
- (id)initWithCanvasDescriptor:(id)a0;
- (unsigned long long)pinHeightStyle;
- (void)setBrailleText:(const char *)a0 length:(unsigned long long)a1;
- (void)setPinState:(union { unsigned long long x0; float x1; })a0 forX:(unsigned long long)a1 y:(unsigned long long)a2;
- (BOOL)skipPinBetweenCellsVertically;
- (BOOL)supportsBrailleText;

@end
