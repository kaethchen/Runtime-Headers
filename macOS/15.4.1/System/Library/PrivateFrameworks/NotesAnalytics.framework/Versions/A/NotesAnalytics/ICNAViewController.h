@class NSView, ICNAEventReporter;

@interface ICNAViewController : NSViewController

@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (readonly, nonatomic) NSView *viewForEventReporter;
@property (readonly, nonatomic) NSView *viewForEventReporterIfLoaded;

- (void)dealloc;
- (void).cxx_destruct;
- (void)eventReporterLostSession:(id)a0;

@end
