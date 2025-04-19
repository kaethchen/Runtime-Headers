@interface MRCriticalSectionCoordinator : NSObject

+ (id)enterCriticalSection;
+ (void)exitCriticalSection:(id)a0;
+ (void)exitCriticalSectionUsingRequestID:(id)a0;

@end
