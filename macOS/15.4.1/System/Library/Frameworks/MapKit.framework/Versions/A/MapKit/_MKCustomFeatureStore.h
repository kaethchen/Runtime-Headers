@class NSString, MKQuadTrie, NSMutableSet, NSHashTable, GEOFeatureStyleAttributes;
@protocol MKCustomFeatureStoreDelegate;

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource> {
    MKQuadTrie *_annotationsTrie;
    NSMutableSet *_globalAnnotations;
    NSHashTable *_observers;
    NSString *_annotationText;
    NSString *_annotationLocale;
    unsigned char _sceneState;
}

@property (weak, nonatomic) id<MKCustomFeatureStoreDelegate> delegate;
@property (readonly, nonatomic) BOOL isClusteringEnabled;
@property (copy, nonatomic) GEOFeatureStyleAttributes *clusterStyleAttributes;
@property (nonatomic) unsigned char sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)setAnnotations:(id)a0;
- (void)addAnnotations:(id)a0;
- (void)_setSceneState:(unsigned char)a0;
- (unsigned long long)annotationCount;
- (void)_clearGlobalAnnotations;
- (void)_clearTileAnnotations;
- (void)_invalidateGlobalAnnotations;
- (void)_invalidateRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)allAnnotations;
- (id)annotationsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (id)globalAnnotations;
- (void)hideScene;
- (id)initWithClustering:(BOOL)a0;
- (void)removeAnnotations:(id)a0;
- (unsigned char)sceneState;
- (void)setClusterAnnotationText:(id)a0 locale:(id)a1;
- (void)showScene;

@end
