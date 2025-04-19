@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (id)debugDescription;
- (unsigned int)identifier;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (void)setIdentifier:(unsigned int)a0;
- (id)constantName;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setConstantName:(id)a0;

@end
