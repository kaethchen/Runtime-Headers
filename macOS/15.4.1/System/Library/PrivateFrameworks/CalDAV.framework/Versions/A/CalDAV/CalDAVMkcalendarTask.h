@class NSSet;
@protocol CalDAVMkcalendarTaskDelegate, CoreDAVTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask

@property (retain, nonatomic) NSSet *setElements;
@property (nonatomic) id<CalDAVMkcalendarTaskDelegate, CoreDAVTaskDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)requestBody;
- (id)httpMethod;
- (id)copyDefaultParserForContentType:(id)a0;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithPropertiesToSet:(id)a0 atURL:(id)a1;
- (void)setSupportForEvents:(BOOL)a0 tasks:(BOOL)a1;

@end
