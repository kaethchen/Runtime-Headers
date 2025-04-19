@class NSSet, NSMutableDictionary;

@interface VCPCoreMLFeatureProviderGestureVideo : NSObject <MLFeatureProvider> {
    NSMutableDictionary *_observationsPersons;
    BOOL _ready;
    int _channels;
    int _currentGroupID;
}

@property BOOL lrFlip;
@property BOOL scaleUpSmallHandGroup;
@property int rotationInDegrees;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)featureValueForName:(id)a0;
- (void)setCurrentGroupID:(int)a0;
- (BOOL)ready;
- (void)addLeftHand:(id)a0 andRightHand:(id)a1;
- (id)existingGroupIDs;
- (id)observationsForCurrentGroup;

@end
