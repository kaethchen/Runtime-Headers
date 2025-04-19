@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (void).cxx_destruct;
- (id)initWithName:(const char *)a0;
- (id)queue;
- (void)execute:(id /* block */)a0;
- (id)initWithName:(const char *)a0 queue:(id)a1;
- (void)executeSync:(id /* block */)a0;
- (id)logHandle;
- (BOOL)executeSyncWithBOOL:(id /* block */)a0;
- (id)executeSyncWithResult:(id /* block */)a0;

@end
