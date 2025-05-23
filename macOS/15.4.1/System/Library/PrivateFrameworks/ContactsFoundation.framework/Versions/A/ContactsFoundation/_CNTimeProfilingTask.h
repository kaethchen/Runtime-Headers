@class CNTask;
@protocol CNTaskTimeProfileLogging, CNTimeProvider;

@interface _CNTimeProfilingTask : CNTask

@property (readonly) CNTask *task;
@property (readonly) id<CNTimeProvider> timeProvider;
@property (readonly) id<CNTaskTimeProfileLogging> logger;

- (id)init;
- (id)run;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithTask:(id)a0 timeProvider:(id)a1 logger:(id)a2;
- (id)initWithTask:(id)a0 timeProvider:(id)a1 os_log:(id)a2;

@end
