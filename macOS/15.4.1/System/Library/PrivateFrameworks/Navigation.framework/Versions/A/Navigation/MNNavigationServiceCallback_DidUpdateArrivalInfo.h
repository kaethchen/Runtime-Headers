@class MNArrivalInfo;

@interface MNNavigationServiceCallback_DidUpdateArrivalInfo : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNArrivalInfo *arrivalInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;

@end
