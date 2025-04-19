@class NSString, PGGraphPetNodeCollection, CLSServiceManager, PGGraphPersonNodeCollection;

@interface PGPetMemoryTitleGenerator : PGTitleGenerator {
    CLSServiceManager *_serviceManager;
}

@property (retain, nonatomic) NSString *seasonName;
@property (nonatomic) BOOL useAdventureTitle;
@property (nonatomic) BOOL usePetAndPersonTitle;
@property (retain, nonatomic) PGGraphPetNodeCollection *petNodes;
@property (retain, nonatomic) PGGraphPersonNodeCollection *personNodeAsCollection;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 type:(long long)a1 titleGenerationContext:(id)a2;

@end
