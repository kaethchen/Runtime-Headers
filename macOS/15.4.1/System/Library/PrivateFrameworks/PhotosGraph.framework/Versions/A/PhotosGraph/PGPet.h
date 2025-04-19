@class NSString, PGGraphMomentNodeCollection, PGGraphPersonNodeCollection;

@interface PGPet : NSObject <PGGraphIngestPet>

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long species;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *ownerNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addOwnerNodes:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 petSpecies:(unsigned long long)a1 name:(id)a2 isFavorite:(BOOL)a3 momentNodes:(id)a4 ownerNodes:(id)a5;

@end
