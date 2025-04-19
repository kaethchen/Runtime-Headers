@class __IMDPersistenceServiceListenerImpl;

@interface IMDPersistenceServiceListener : NSObject

@property (retain, nonatomic) __IMDPersistenceServiceListenerImpl *impl;

- (id)init;
- (void).cxx_destruct;
- (void)resume;

@end
