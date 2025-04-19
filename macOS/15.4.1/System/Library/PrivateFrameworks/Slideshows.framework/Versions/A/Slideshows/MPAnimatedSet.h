@class MCContainerParallelizer, NSString, NSDictionary, MUMathExpressionDoubleBased, NSMutableDictionary, NSMutableArray;

@interface MPAnimatedSet : NSObject <NSSecureCoding> {
    NSDictionary *mDescription;
    MUMathExpressionDoubleBased *mTimeOfGoodPositionFormula;
    NSMutableDictionary *mSlides;
    NSMutableArray *mFeaturedSlidePositions;
    NSMutableArray *mFeaturingAttributes;
    double mIntroDuration;
    double mMainDuration;
    double mOutroDuration;
    double mTotalNumberOfIntervals;
    NSDictionary *mDefaultFeaturingAnimationAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *animatedSetID;
@property (readonly) BOOL timeWraps;
@property double startTime;
@property (readonly) double fullDuration;
@property double defaultFeaturingDuration;
@property double defaultFeaturingAnimationDuration;
@property (readonly) unsigned long long minimumNumberOfSlides;
@property (readonly) unsigned long long maximumNumberOfSlides;
@property (readonly) BOOL needsEvenNumberOfSlides;
@property (copy) NSDictionary *attributes;
@property BOOL easeInEaseOutBetweenFeaturedSlides;
@property BOOL firstSlideIsShared;
@property BOOL lastSlideIsShared;
@property (copy) NSString *introAnimationID;
@property (copy) NSString *outroAnimationID;
@property double distance;
@property double speed;
@property (readonly) MCContainerParallelizer *container;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)time1OfGoodPositionForPosition:(long long)a0;
- (void)updateContainer;
- (void)removeAllSlides;
- (double)time2OfGoodPositionForPosition:(long long)a0;
- (void)applyIntroAnimationPathsToPlug:(id)a0 atPosition:(unsigned long long)a1;
- (void)chooseAnIntroAnimation;
- (void)chooseAnOutroAnimation;
- (void)computeAnimationPathsForTime:(double)a0 andPosition:(unsigned long long)a1 usingAnimationPaths:(id)a2 otherAttributes:(id)a3 plugTimeOffset:(double)a4 plugTimeOffsetKind:(int)a5 plugAnimationPaths:(id)a6;
- (void)decodeFromSlides:(id)a0;
- (double)featuringTimeForSlideAtPosition:(unsigned long long)a0;
- (id)initWithAnimatedSetID:(id)a0;
- (void)insertIntoContainer:(id)a0;
- (void)removeSlideAtPosition:(unsigned long long)a0;
- (void)setAnimationPaths:(id)a0 onPlug:(id)a1 atPosition:(unsigned long long)a2 atTimeOffset:(double)a3 withTimeOffsetKind:(int)a4 forDuration:(double)a5 withFunctionTimeOffset:(double)a6 andFunctionTimeFactor:(double)a7 easeIn:(BOOL)a8 easeOut:(BOOL)a9 otherAttributes:(id)a10;
- (void)setAnimationPathsForPlug:(id)a0 atPosition:(unsigned long long)a1;
- (void)showSlide:(id)a0 atPosition:(unsigned long long)a1 featuringAttributes:(id)a2;
- (id)slides;
- (double)timeOfGoodPositionForPosition:(long long)a0;

@end
