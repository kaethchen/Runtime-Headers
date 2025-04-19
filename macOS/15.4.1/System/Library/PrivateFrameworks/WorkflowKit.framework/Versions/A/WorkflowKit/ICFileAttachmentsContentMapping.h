@interface ICFileAttachmentsContentMapping : ICContentMapping

- (BOOL)supportsMultipleItems;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (BOOL)skipURLEncoding;

@end
