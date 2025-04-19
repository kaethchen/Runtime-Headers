@protocol STAttributedEntityBatchResolving;

@interface STMediaStatusDomainDisplayNameTransformer : NSObject <STStatusDomainDataTransforming> {
    id<STAttributedEntityBatchResolving> _entityResolver;
}

- (void).cxx_destruct;
- (id)initWithEntityResolver:(id)a0;
- (id)transformedDataForData:(id)a0;

@end
