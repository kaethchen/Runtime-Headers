@class NSNumber;

@interface ICPrivacyInfoDetails : NSObject

@property (nonatomic) BOOL acknowledgementNeeded;
@property (nonatomic) BOOL previouslyAcknowledged;
@property (nonatomic) BOOL rejected;
@property (copy, nonatomic) NSNumber *acceptedVersion;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
