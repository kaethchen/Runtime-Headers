@class NSString, NSArray, NSDictionary, MPArtworkCatalog;

@interface MPCMRContentItemRemoteArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (retain, nonatomic) MPArtworkCatalog *storeArtworkCatalog;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (readonly, nonatomic) NSArray *supportedRemoteArtworkFormats;
@property (readonly, nonatomic) NSDictionary *remoteArtworks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (void)setFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDestinationScale:(double)a0;
- (id)initWithIdentifier:(id)a0 artworkIdentifier:(id)a1 supportedRemoteArtworkFormats:(id)a2 remoteArtworks:(id)a3;

@end
