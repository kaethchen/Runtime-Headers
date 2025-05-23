@interface NLPModelTrainingDataProvider : NLDataProvider {
    unsigned long long _numberOfInstances;
    void *_dataSource;
    id /* block */ _instanceDataProvider;
}

- (void).cxx_destruct;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)initWithConfiguration:(id)a0 numberOfInstances:(unsigned long long)a1 dataSource:(void *)a2 instanceDataProvider:(id /* block */)a3;
- (unsigned long long)numberOfInstances;

@end
