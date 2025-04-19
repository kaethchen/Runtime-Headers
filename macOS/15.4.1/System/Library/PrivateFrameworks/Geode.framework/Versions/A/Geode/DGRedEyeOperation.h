@class NSString, NSArray;

@interface DGRedEyeOperation : DGOperation <NSCopying, DGAutoCalculable> {
    unsigned long long _inputActiveSpotIndex;
    NSArray *_inputSpots;
}

@property (nonatomic) double inputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

- (id)init;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;
- (void)_applyAutoSettings:(id)a0;
- (void)addSpot:(id)a0;
- (BOOL)allowDough;
- (void)deleteSpotAtIndex:(unsigned long long)a0;
- (unsigned long long)inputActiveSpotIndex;
- (id)inputSpots;
- (void)insertObject:(id)a0 inInputSpotsAtIndex:(unsigned long long)a1;
- (BOOL)isVideoCompatible;
- (void)masterRectChangedFromRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 toRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (BOOL)needsInputImageWithoutGeometry;
- (id)processImage:(id)a0 options:(id)a1;
- (void)removeObjectFromInputSpotsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInInputSpotsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setInputActiveSpotIndex:(unsigned long long)a0;
- (void)setInputSpots:(id)a0;
- (void)setOperationDefaults;
- (void)setSpot:(id)a0 atIndex:(unsigned long long)a1;
- (id)spotAtIndex:(unsigned long long)a0;
- (unsigned long long)spotCount;

@end
