@interface NSCustomDynamicColor : NSDynamicNamedColor {
    id /* block */ _dynamicProvider;
}

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithCatalogName:(id)a0 colorName:(id)a1 genericColor:(id)a2;
- (id)initWithName:(id)a0 dynamicProvider:(id /* block */)a1;
- (id)resolvedColor;

@end
