@interface QCLink : GFConnection {
    id _proExtension;
    void *_unused2[3];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (void)connectionWillDeleteFromGraph;
- (id)destinationPatch;
- (id)initWithGraph:(id)a0 sourcePort:(id)a1 destinationPort:(id)a2 arguments:(id)a3;
- (id)parentPatch;
- (id)sourcePatch;

@end
