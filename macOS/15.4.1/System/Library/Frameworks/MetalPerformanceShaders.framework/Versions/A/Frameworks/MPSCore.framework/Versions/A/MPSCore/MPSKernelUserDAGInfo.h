@class NSArray;

@interface MPSKernelUserDAGInfo : NSObject {
    NSArray *_stitchingGraphs;
    NSArray *_userVisibleFunctions;
    NSArray *_userStitchedFunctions;
    NSArray *_stitchedMTLFunctions;
    unsigned long long _cachedHash;
}

@property (readonly) unsigned long long hash;

- (void)dealloc;
- (id)getStitchedFunctions:(id)a0;
- (id)initWithMTLStitchingGraphs:(id)a0 visibleFunctions:(id)a1 stitchedFunctions:(id)a2;

@end
