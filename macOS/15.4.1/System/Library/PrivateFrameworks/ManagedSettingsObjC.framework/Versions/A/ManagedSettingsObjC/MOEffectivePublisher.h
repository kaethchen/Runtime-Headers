@class MOSettingsPublisherBase;

@interface MOEffectivePublisher : MOPublisher

@property (readonly, nonatomic) MOSettingsPublisherBase *base;

- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)sinkWithReceiveInput:(id /* block */)a0;
- (id)initWithInterestedGroups:(id)a0;
- (id)sinkWithRecieveInput:(id /* block */)a0;

@end
