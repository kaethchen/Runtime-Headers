@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject

@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) BOOL retrieveCertificates;
@property (nonatomic) BOOL retrieveAvailablilty;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmailAddresses:(id)a0;
- (id)initWithEmailAddresses:(id)a0 retrieveCertificates:(BOOL)a1 retrieveAvailability:(BOOL)a2 withStartTime:(id)a3 endTime:(id)a4;

@end
