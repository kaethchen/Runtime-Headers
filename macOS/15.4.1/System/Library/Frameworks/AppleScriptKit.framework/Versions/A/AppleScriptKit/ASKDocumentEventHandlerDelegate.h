@interface ASKDocumentEventHandlerDelegate : ASKEventHandlerDelegate

- (id)document:(id)a0 dataOfType:(id)a1 error:(id *)a2;
- (BOOL)document:(id)a0 readFromData:(id)a1 ofType:(id)a2 error:(id *)a3;
- (BOOL)document:(id)a0 readFromURL:(id)a1 ofType:(id)a2 error:(id *)a3;
- (BOOL)document:(id)a0 writeToURL:(id)a1 ofType:(id)a2 error:(id *)a3;

@end
