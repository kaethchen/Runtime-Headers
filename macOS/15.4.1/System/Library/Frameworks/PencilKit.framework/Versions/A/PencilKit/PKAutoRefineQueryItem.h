@class CHTokenizedTextResult, NSIndexSet, NSArray, NSLocale;

@interface PKAutoRefineQueryItem : NSObject {
    NSArray *_boundingBoxForTokenColumn;
}

@property (copy, nonatomic) NSIndexSet *refinedTokenColumns;
@property (readonly, copy, nonatomic) CHTokenizedTextResult *textResult;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *strokesUUIDs;
@property (copy, nonatomic) NSIndexSet *refinableStrokes;
@property (readonly, copy, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForTextResultsColumnAtIndex:(long long)a0;
- (id)initWithQueryItem:(id)a0 usingStrokeProvider:(id)a1;

@end
