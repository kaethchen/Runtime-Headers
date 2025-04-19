@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;

- (void).cxx_destruct;
- (id)_init;
- (id)remove;
- (id)initWithModelGenericObject:(id)a0 sectionIndex:(long long)a1 response:(id)a2;

@end
