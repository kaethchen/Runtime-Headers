@class NSString, NSArray, NSDate, EXSXPCResponseManager;

@interface EXSAvailabilityRequestComponents : NSObject

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, weak, nonatomic) EXSXPCResponseManager *responseManager;

- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0 accountID:(id)a1 emails:(id)a2 startTime:(id)a3 endTime:(id)a4 responseManager:(id)a5;

@end
