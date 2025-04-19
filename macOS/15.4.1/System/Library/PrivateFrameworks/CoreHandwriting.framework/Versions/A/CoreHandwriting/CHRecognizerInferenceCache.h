@class NSMutableDictionary, CHDrawing;

@interface CHRecognizerInferenceCache : NSObject {
    CHDrawing *_lastDrawing;
    NSMutableDictionary *_cachedActivationMatrices;
    NSMutableDictionary *_cachedStrokeIndexMappings;
    NSMutableDictionary *_cachedStrokeEndings;
}

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)cacheActivationMatrix:(id)a0 strokeIndexMapping:(id)a1 strokeEndings:(id)a2 drawing:(id)a3 recognitionEngineCachingKey:(id)a4;
- (id)retrieveActivationMatrixForDrawing:(id)a0 recognitionEngineCachingKey:(id)a1 outStrokeIndexMapping:(id *)a2 outStrokeEndings:(id *)a3;

@end
