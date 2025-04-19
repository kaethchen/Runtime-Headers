@class NSString, NSArray, CHDrawing, NSMutableArray;

@interface CHSynthesisResult : NSObject <NSCopying, NSSecureCoding> {
    struct optional<CHPrincipalLines> { union { char __null_state_; struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } __val_; } ; BOOL __engaged_; } _principalLines;
    NSMutableArray *_subresults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHDrawing *inventoryDebuggingStyleDrawing;
@property (readonly, nonatomic) NSString *inventoryDebuggingStyleContent;
@property (nonatomic) struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; } principalLines;
@property (retain, nonatomic) NSArray *contractViolations;
@property (readonly) CHDrawing *drawing;
@property (readonly) NSString *content;
@property (readonly) NSArray *segmentContents;
@property (readonly) NSArray *segmentStrokeIndexes;
@property unsigned long long numberOfNotSynthesizedCharacters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)append:(id)a0;
- (void)resampleDrawing;
- (void)applyDesiredDistanceBetweenDigitCenters:(double)a0;
- (void)enumerateSubresultsWithBlock:(id /* block */)a0;
- (BOOL)hasPrincipalLines;
- (id)initWithContent:(id)a0 drawing:(id)a1;
- (id)initWithContent:(id)a0 drawing:(id)a1 segmentContents:(id)a2 segmentStrokeIndexes:(id)a3 inventoryDebuggingStyleDrawing:(id)a4 inventoryDebuggingStyleContent:(id)a5 numberOfNotSynthesizedCharacters:(unsigned long long)a6;
- (id)initWithContent:(id)a0 drawing:(id)a1 segmentContents:(id)a2 segmentStrokeIndexes:(id)a3 numberOfNotSynthesizedCharacters:(unsigned long long)a4;
- (void)scaleDrawingWithWidth:(double)a0 height:(double)a1 desiredDistanceBetweenDigitCenters:(double)a2;

@end
