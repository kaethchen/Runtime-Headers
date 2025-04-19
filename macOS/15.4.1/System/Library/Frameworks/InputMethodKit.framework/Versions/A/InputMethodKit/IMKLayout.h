@class NSArray, NSMutableDictionary, NSMutableArray;

@interface IMKLayout : NSObject

@property (nonatomic) double candidateThickness;
@property (retain, nonatomic) NSMutableDictionary *candidateIndexToPositionMapping;
@property (retain, nonatomic) NSMutableDictionary *candidateIndexToNumberIndex;
@property (nonatomic) unsigned long long currentSlot;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) double maxX;
@property (nonatomic) double maxY;
@property (nonatomic) long long currentLineNumber;
@property (nonatomic) BOOL partial;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSMutableArray *layoutUnitsInternal;
@property (readonly, nonatomic) NSArray *layoutUnits;
@property (readonly, nonatomic) unsigned long long lineCount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } canvasSize;
@property (nonatomic) struct CGSize { double width; double height; } extraSize;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)lineAtIndex:(unsigned long long)a0;
- (id)currentLine;
- (void)addLayoutUnit:(id)a0;
- (unsigned long long)candidateNumberForKey:(id)a0;
- (void)changeLine;
- (id)dictionaryForPosition:(struct { long long x0; long long x1; })a0;
- (void)extendHeight:(double)a0;
- (void)extendWidth:(double)a0;
- (id)layoutUnitForKey:(id)a0;
- (struct { long long x0; long long x1; })lineAndSlotForCandidateIndex:(id)a0;
- (struct { long long x0; long long x1; })positionForDictionary:(id)a0;

@end
