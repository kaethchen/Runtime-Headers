@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery : CHQuery {
    NSArray *_strokeGroupItems;
    NSDictionary *_strokeGroupItemsByID;
}

@property (readonly, copy, nonatomic) NSArray *strokeGroupItems;

- (void).cxx_destruct;
- (id)debugName;
- (id)tokenizedStrokeResultForInitialStrokes:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 tokenizationLevel:(long long)a2;
- (BOOL)needsForegroundRecognition;
- (id)q_strokeGroupItemsFromSessionResult:(id)a0;
- (void)q_updateQueryResult;
- (id)tokenStrokeIdentifiersWithCoveringStroke:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)tokenizedStrokeResultForInitialStrokes:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 tokenizationLevel:(long long)a2 completion:(id /* block */)a3 shouldCancel:(id /* block */)a4;

@end
