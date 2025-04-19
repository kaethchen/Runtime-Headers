@interface _MLServiceS : NSObject {
    void /* unknown type, empty encoding */ modelName;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ service;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)getPredictionWithInputFeatures:(id)a0;
- (void)getModelStatsWithCompletionHandler:(id /* block */)a0;
- (id)getPredictionDictionaryWithInputFeatures:(id)a0;
- (id)initWithNameOfModel:(id)a0;
- (void)writeWithData:(id)a0;

@end
