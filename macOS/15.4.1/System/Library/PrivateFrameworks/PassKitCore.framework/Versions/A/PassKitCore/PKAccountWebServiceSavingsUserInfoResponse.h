@class PKSavingsAccountUserInfo;

@interface PKAccountWebServiceSavingsUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKSavingsAccountUserInfo *userInfo;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
