@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage>

@property (retain) NSMutableArray *signatureIDs;
@property (retain) NSMutableDictionary *signatures;
@property (retain) NSMutableDictionary *mediaItems;
@property (readonly) NSArray *referenceSignatures;

- (id)init;
- (void).cxx_destruct;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (void)producedMediaItem:(id)a0 forID:(id)a1;
- (void)producedSignature:(id)a0 forID:(id)a1;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;
- (void)removeSignatureWithID:(id)a0;
- (BOOL)signatureExistsForIdentifier:(id)a0;

@end
