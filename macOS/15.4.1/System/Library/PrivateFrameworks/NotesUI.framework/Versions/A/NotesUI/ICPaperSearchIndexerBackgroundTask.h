@class NSString, ICNoteContext;

@interface ICPaperSearchIndexerBackgroundTask : NSObject <ICBackgroundTask>

@property (readonly, nonatomic) ICNoteContext *noteContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeActivityScheduler;

- (void).cxx_destruct;
- (void)didRegister:(BOOL)a0;
- (void)handleTaskExpiration;
- (void)runTaskWithCompletion:(id /* block */)a0;
- (id)initWithNoteContext:(id)a0;

@end
