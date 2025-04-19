@class NSMutableDictionary, NSMutableArray;

@interface CRRecognitionResult : NSObject <NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapUpdateLock;
}

@property (retain) NSMutableDictionary *detectorRecognizerResultMap;
@property (retain) NSMutableArray *detectedLineRegions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)enumerateResultsUsingBlock:(id /* block */)a0;
- (id)_recognizedRegionsForDetectedLineRegion:(id)a0;
- (void)addRecognizedRegionPair:(id)a0;
- (id)recognizedLineRegions;
- (id)recognizedRegionsForDetectedLineRegion:(id)a0;
- (id)recognizedRegionsForDetectedLineRegions:(id)a0;

@end
