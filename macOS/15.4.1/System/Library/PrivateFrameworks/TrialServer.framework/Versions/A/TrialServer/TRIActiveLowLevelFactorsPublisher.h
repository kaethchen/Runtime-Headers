@class TRIActiveLowLevelFactorsWriter;
@protocol TRIActiveLowLevelNamespacesProviding, TRINamespaceFactorLevelsRetrieving;

@interface TRIActiveLowLevelFactorsPublisher : NSObject {
    id<TRIActiveLowLevelNamespacesProviding> _namespacesProvider;
    id<TRINamespaceFactorLevelsRetrieving> _retriever;
    TRIActiveLowLevelFactorsWriter *_writer;
}

- (void).cxx_destruct;
- (id)initWithNamespacesProvider:(id)a0 factorRetriever:(id)a1 writer:(id)a2;
- (id)initWithServerContext:(id)a0;
- (void)publishLowLevelFactors;

@end
