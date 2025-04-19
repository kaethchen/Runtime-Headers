@interface SBProxyByClass : SBProxy {
    Class _classToCreate;
}

- (id)description;
- (unsigned int)codeInContext:(id)a0;
- (id)initWithClass:(Class)a0 properties:(id)a1 data:(id)a2;
- (id)initWithContext:(id)a0 specifier:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a1;
- (id)initWithData:(id)a0 andProperties:(id)a1;

@end
