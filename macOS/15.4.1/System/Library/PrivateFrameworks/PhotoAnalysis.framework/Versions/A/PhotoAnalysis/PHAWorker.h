@class NSString;

@interface PHAWorker : NSObject <PHAWorkerConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureInterface:(id)a0;


@end
