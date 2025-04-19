@class CCDonateRequest;

@interface CCDonateRequestQueueNode : NSObject

@property (retain, nonatomic) CCDonateRequest *request;
@property (retain, nonatomic) CCDonateRequestQueueNode *next;

- (void).cxx_destruct;

@end
