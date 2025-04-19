@class NSArray, NSString, NSData, SHJSONLCustomCatalogTransformer;
@protocol SHCustomCatalogStorage;

@interface SHJSONLCustomCatalogContainer : NSObject <SHCustomCatalogContainer>

@property (readonly) id<SHCustomCatalogStorage> container;
@property (readonly) SHJSONLCustomCatalogTransformer *transformer;
@property (readonly) NSArray *referenceSignatures;
@property (readonly) NSData *dataRepresentation;
@property (readonly) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customCatalogURLFromURL:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (BOOL)loadFromURL:(id)a0 error:(id *)a1;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;
- (BOOL)containsSignatureWithIdentifier:(id)a0;
- (id)jsonObjectRepresentationWithError:(id *)a0;
- (BOOL)loadFromData:(id)a0 error:(id *)a1;
- (id)matchReferenceAtIndex:(long long)a0;
- (id)matchReferenceForTrackID:(unsigned long long)a0;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;
- (void)removeSignatureWithID:(id)a0;

@end
