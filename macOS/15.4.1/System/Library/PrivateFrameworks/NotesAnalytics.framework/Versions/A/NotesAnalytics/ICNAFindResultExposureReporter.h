@class FindSessionData, ICNAEventReporter, NSObject, NSWindow;
@protocol OS_dispatch_queue;

@interface ICNAFindResultExposureReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (weak, nonatomic) NSWindow *window;
@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (retain, nonatomic) FindSessionData *findSessionData;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)submitEventIfApplicableForNote:(id)a0;
- (void)eventReporterLostSession:(id)a0;
- (BOOL)hasActiveTrackingFindSession;
- (void)startTrackingFindSession;
- (void)updateWithSearchQuery:(id)a0;

@end
