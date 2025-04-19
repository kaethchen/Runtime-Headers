@class NSString, NSSet, IMAPTaskManager;

@interface IMAPBodyFetchContext : NSObject <MCBodyFetchContext> {
    NSSet *_messages;
}

@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
