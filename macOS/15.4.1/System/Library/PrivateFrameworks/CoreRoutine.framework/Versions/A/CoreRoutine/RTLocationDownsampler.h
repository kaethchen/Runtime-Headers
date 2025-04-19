@interface RTLocationDownsampler : NSObject

+ (id /* block */)createErrorFunctionWithAbsoluteCrosstrackDistance;
+ (id /* block */)createErrorFunctionWithPerpendicularDistance;
+ (id)downsampleLocations:(id)a0 errorFunction:(id /* block */)a1 errorThreshold:(double)a2 outputSize:(unsigned long long)a3;
+ (id)filterConvergingLocations:(id)a0;
+ (id)downsampleLocations:(id)a0 outputSize:(unsigned long long)a1;
+ (id)_downsampleLocations:(id)a0 errorFunction:(id /* block */)a1 errorThreshold:(double)a2;
+ (id)_downsampleLocations:(id)a0 errorFunction:(id /* block */)a1 outputSize:(long long)a2;
+ (id /* block */)createErrorFunctionWithPerpendicularDistanceAndSpeed;

@end
