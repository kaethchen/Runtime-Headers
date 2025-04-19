@class NSNumber;

@interface VUIAgeVerification : NSObject

@property (retain, nonatomic) NSNumber *minTvRatingRequiringAgeVerification;
@property (retain, nonatomic) NSNumber *minMovieRatingRequiringAgeVerification;
@property (retain, nonatomic) id notificationToken;
@property (nonatomic) BOOL isAgeVerificationEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)configureAgeVerification:(id)a0;
- (void)performAgeGateVerificationWithRatingValue:(id)a0 ratingDomain:(id)a1 adamId:(id)a2 resourceType:(id)a3 completion:(id /* block */)a4;

@end
