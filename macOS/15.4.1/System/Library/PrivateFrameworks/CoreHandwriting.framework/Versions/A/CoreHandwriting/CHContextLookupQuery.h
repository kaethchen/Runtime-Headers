@interface CHContextLookupQuery : CHQuery

- (id)debugName;
- (id)contextLookupResultsAtLocation:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)contextLookupResultsWithSelectedStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)contextLookupResultsWithSelectionPath:(struct CGPath { } *)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)structuredContextLookupResultsWithSelectedStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)structuredContextLookupResultsWithSelectionPath:(struct CGPath { } *)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;

@end
