@class NSArray, NSMutableDictionary, NSOrderedSet, NSString;
@protocol CHStrokeProviderVersion;

@interface CHClientStrokeProvider : NSObject <CHStrokeProvider> {
    NSArray *_orderedStrokes;
    long long _version;
    long long _strokeClassificationGTSource;
}

@property (readonly, nonatomic) NSMutableDictionary *_strokeIdsByEncoding;
@property (nonatomic) BOOL hasValidMathAnnotation;
@property (readonly, nonatomic) NSMutableDictionary *strokesByID;
@property (readonly, nonatomic) NSArray *sectionedStrokes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *transcriptionCache;
@property (readonly) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly) long long groupingPriority;
@property (readonly) struct CGSize { double x0; double x1; } drawingCanvasSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNonTextSection:(id)a0;

- (void).cxx_destruct;
- (id)drawing;
- (id)cachedTranscriptionForStrokeGroup:(id)a0;
- (long long)compareOrderOfStrokeWithIdentifier:(id)a0 toStrokeWithIdentifier:(id)a1;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id)a0 toStrokeWithIdentifier:(id)a1;
- (id)drawingWithGroups:(id)a0 transforms:(id)a1;
- (id)drawingWithStrokes:(id)a0;
- (id)encodedStrokeIdentifier:(id)a0;
- (id)getStrokeClassificationArray:(long long)a0 ofType:(long long)a1;
- (id)initWithStrokes:(id)a0 version:(long long)a1;
- (id)initWithURL:(id)a0 version:(long long)a1 keepTextOnly:(BOOL)a2;
- (id)initWithURL:(id)a0 version:(long long)a1 keepTextOnly:(BOOL)a2 strokesFromSections:(id)a3 channels:(id)a4 sectionTypes:(id)a5;
- (void)loadStrokesBasedOnSectionTypeFrom:(id)a0 section:(id)a1 withTime:(BOOL)a2 atTimestamp:(double)a3 channels:(id)a4 orderedStrokes:(id)a5;
- (void)loadStrokesBasedOnStrokeClassicationType:(id)a0 section:(id)a1 withTime:(BOOL)a2 atTimestamp:(double)a3 channels:(id)a4 orderedStrokes:(id)a5;
- (void)loadStrokesBasedOnUnicodeFrom:(id)a0 section:(id)a1 withTime:(BOOL)a2 atTimestamp:(double)a3 channels:(id)a4 orderedStrokes:(id)a5;
- (void)loadStrokesFrom:(id)a0 section:(id)a1 withTime:(BOOL)a2 atTimestamp:(double)a3 channels:(id)a4 orderedStrokes:(id)a5;
- (void)loadStrokesFrom:(id)a0 withStrokes:(id)a1 types:(id)a2 withTime:(BOOL)a3 atTimestamp:(double)a4 channels:(id)a5 orderedStrokes:(id)a6;
- (void)setStrokeAttributes:(unsigned long long)a0 atIndexes:(id)a1;
- (id)strokeForIdentifier:(id)a0;
- (id)strokeIdentifierFromData:(id)a0;
- (void)updateWithAddedStrokes:(id)a0 removedStrokeIds:(id)a1;
- (void)updateWithGroups:(id)a0 transforms:(id)a1;

@end
