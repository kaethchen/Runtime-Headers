@class NSArray;

@interface MADPersonIdentificationResult : MADResult

@property (readonly, nonatomic) long long frontCameraCaptureState;
@property (readonly, nonatomic) NSArray *resultItems;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResultItems:(id)a0 frontCameraCaptureState:(long long)a1;

@end
