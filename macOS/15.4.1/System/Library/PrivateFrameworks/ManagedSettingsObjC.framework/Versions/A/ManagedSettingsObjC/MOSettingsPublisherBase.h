@class NSSet, MOPublisher;

@interface MOSettingsPublisherBase : MOPublisher

@property (readonly, nonatomic) MOPublisher *upstream;
@property (readonly, nonatomic) NSSet *interestedGroups;
@property (readonly, nonatomic) id /* block */ startBlock;
@property (readonly, nonatomic) id /* block */ stopBlock;

- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 interestedGroups:(id)a1 startBlock:(id /* block */)a2 stopBlock:(id /* block */)a3;

@end
