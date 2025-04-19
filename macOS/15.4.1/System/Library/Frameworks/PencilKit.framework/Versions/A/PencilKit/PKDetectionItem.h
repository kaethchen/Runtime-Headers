@class PKDrawing, NSBezierPath, PKDetectionQueryItem, PKRecognitionSessionManager, NSUUID, NSString, NSColor;

@interface PKDetectionItem : NSObject <_PKDrawingDetectionItem>

@property (retain, nonatomic) PKDetectionQueryItem *queryItem;
@property (retain, nonatomic) NSBezierPath *itemSpaceBoundsPath;
@property (retain, nonatomic) NSBezierPath *itemSpaceBaselinePath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strokeBounds;
@property (nonatomic) double _strokeWidth;
@property (retain, nonatomic) NSColor *inkColor;
@property (weak, nonatomic) PKRecognitionSessionManager *sessionManager;
@property (retain, nonatomic) NSUUID *cachedUUID;
@property (nonatomic) BOOL validCachedUUID;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) NSColor *strokeColor;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } drawingToItemTransform;
@property (readonly, nonatomic) NSBezierPath *drawingSpaceBoundsPath;
@property (readonly, nonatomic) NSBezierPath *_baselinePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)UUID;
- (id)image;
- (id)setUUID:(id)a0;
- (id)_actionNameForActivation:(BOOL)a0;
- (void)_generatePaths;
- (BOOL)_hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)_strokes;
- (id)initWithSessionManager:(id)a0;

@end
