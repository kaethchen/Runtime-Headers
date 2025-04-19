@class PKStrokeSelectionImage, NSOrderedSet, NSSet, PKDrawing, PKStroke;

@interface PKStrokeSelection : NSObject

@property (readonly, nonatomic) NSOrderedSet *strokes;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) PKStroke *lassoStroke;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImage;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImageWithHighlight;
@property (readonly, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) long long requiredContentVersion;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 drawingClass:(Class)a2 error:(id *)a3;
+ (id)strokeSelectionFromData:(id)a0;
+ (id)strokeSelectionFromData:(id)a0 forDrawingClass:(Class)a1;

- (id)description;
- (void).cxx_destruct;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)writableTypeIdentifiersForItemProvider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)_newDrawingWithStrokes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsWithoutLasso;
- (BOOL)containsBitmapData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })externalElementsBounds;
- (id)initWithStrokes:(id)a0 lassoStroke:(id)a1 drawing:(id)a2;
- (id)legacyStrokeDataForSelection;
- (id)strokeDataForSelection;

@end
