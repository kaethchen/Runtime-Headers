@interface CRJSContext : JSContext

+ (id)sharedContext;

- (id)initWithVirtualMachine:(id)a0;
- (id)_cardWithTitle:(id)a0 cardSections:(id)a1 interaction:(id)a2 error:(id *)a3;
- (void)_createCard:(id)a0 completionHandler:(id /* block */)a1;
- (void)evaluateScript:(id)a0 completionHandler:(id /* block */)a1;

@end
