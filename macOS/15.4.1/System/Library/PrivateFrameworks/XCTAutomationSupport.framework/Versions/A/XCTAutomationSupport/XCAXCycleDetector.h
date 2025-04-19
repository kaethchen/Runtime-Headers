@class NSArray, NSMutableOrderedSet;

@interface XCAXCycleDetector : NSObject {
    NSMutableOrderedSet *_elementStack;
}

@property (readonly) NSArray *currentElementPath;

+ (id)_cycleDescriptionForElementStack:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)untrackElement:(id)a0;
- (id)_cycleDescriptionForElementWithCurrentStack:(id)a0;
- (id)_cycleErrorForElement:(id)a0;
- (BOOL)trackElement:(id)a0 error:(id *)a1;

@end
