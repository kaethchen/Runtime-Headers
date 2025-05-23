@class NSArray, VCPHandObservation;

@interface VCPPersonObservation : NSObject

@property (retain, nonatomic) NSArray *keypoints;
@property (retain, nonatomic) VCPHandObservation *leftHand;
@property (retain, nonatomic) VCPHandObservation *rightHand;
@property (nonatomic) float relativeActionScore;
@property (nonatomic) float absoluteActionScore;
@property (nonatomic) int personID;
@property (nonatomic) int revision;

- (void).cxx_destruct;

@end
