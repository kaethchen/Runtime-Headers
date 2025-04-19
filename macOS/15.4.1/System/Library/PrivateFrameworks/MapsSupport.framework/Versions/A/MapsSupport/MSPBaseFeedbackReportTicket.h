@class NSString, GEORPFeedbackRequestParameters, GEORPFeedbackUserInfo, GEOMapServiceTraits;
@protocol GEOMapServiceFeedbackReportTicket;

@interface MSPBaseFeedbackReportTicket : NSObject <MSPFeedbackReportTicket> {
    GEORPFeedbackUserInfo *_userInfo;
}

@property (readonly, nonatomic) GEORPFeedbackRequestParameters *requestParameters;
@property (readonly, nonatomic) GEORPFeedbackUserInfo *userInfo;
@property (retain, nonatomic) id<GEOMapServiceFeedbackReportTicket> ticket;
@property (copy, nonatomic) id /* block */ willSubmitRequestBlock;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) long long userInfoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;
- (void)_submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;
- (id)initWithFeedbackRequestParameters:(id)a0 traits:(id)a1 userInfoType:(long long)a2;

@end
