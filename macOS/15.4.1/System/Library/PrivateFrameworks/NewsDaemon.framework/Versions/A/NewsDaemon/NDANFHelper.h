@interface NDANFHelper : NSObject <FCANFHelper>

- (id)manifestFromANFDocumentData:(id)a0;
- (void)popInterest;
- (void)pushInterest;
- (id)_imageResourcesByIdentifierFromList:(id)a0;
- (id)_nonImageResourcesFromList:(id)a0;
- (BOOL)_preferTaggedImages;
- (id)_resourceIDFromURL:(id)a0;
- (id)_resourceIDsFromURLs:(id)a0;

@end
