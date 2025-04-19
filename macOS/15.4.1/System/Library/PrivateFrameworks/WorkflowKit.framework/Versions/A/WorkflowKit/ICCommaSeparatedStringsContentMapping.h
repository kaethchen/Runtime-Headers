@interface ICCommaSeparatedStringsContentMapping : ICContentMapping

- (BOOL)supportsMultipleItems;
- (id)contentItemClasses;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (id)allowedCharacterSet;
- (BOOL)skipURLEncoding;
- (id)escapedCharacters;

@end
