@interface PXStoryDefaultAutoCurationProducer : NSObject <PXStoryAutoCurationProducer> {
    void /* unknown type, empty encoding */ curationContext;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCurationContext:(id)a0;
- (id)requestCuratedAssetsWithOptions:(unsigned long long)a0 targetOverallDurationInfo:(struct { long long x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x1; })a1 resultHandler:(id /* block */)a2;
- (id)requestCurationLengthsWithOptions:(unsigned long long)a0 allAssets:(id)a1 curatedAssets:(id)a2 resultHandler:(id /* block */)a3;

@end
