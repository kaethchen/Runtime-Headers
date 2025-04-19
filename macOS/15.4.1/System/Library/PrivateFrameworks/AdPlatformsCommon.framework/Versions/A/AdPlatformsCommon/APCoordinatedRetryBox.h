@class NSUUID, NSDictionary;
@protocol APRequestCoordinatorDelegate;

@interface APCoordinatedRetryBox : NSObject

@property (readonly, weak, nonatomic) id<APRequestCoordinatorDelegate> requestDelegate;
@property (readonly, nonatomic) long long requestType;
@property BOOL canRetry;
@property (readonly, nonatomic) NSUUID *requestID;
@property (readonly, nonatomic) NSUUID *requesterID;
@property (readonly, nonatomic) NSDictionary *diagnosticReportPayload;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 delegate:(id)a1;

@end
