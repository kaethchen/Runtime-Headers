@class NSSet, NSDate;

@interface PKAccountWebServiceAccountUsersResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSSet *users;
@property (readonly, nonatomic) NSDate *lastUpdated;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
