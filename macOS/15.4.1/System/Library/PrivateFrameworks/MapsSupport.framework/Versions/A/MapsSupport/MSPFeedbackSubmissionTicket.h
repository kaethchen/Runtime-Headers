@class NSProgress, NSString, GEOMapServiceTraits;
@protocol GEOMapServiceFeedbackReportTicket;

@interface MSPFeedbackSubmissionTicket : NSObject <GEOMapServiceFeedbackReportTicket> {
    id<GEOMapServiceFeedbackReportTicket> _ticket;
    NSString *_sessionIdentifier;
}

@property (readonly, nonatomic) NSProgress *fakeProgress;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ticketForFeedbackRequest:(id)a0 traits:(id)a1;
+ (id)ticketForFeedbackRequest:(id)a0;
+ (id)ticketForFeedbackRequestParameters:(id)a0 mapItem:(id)a1 traits:(id)a2;

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;
- (id)initWithMapServiceTicket:(id)a0;

@end
