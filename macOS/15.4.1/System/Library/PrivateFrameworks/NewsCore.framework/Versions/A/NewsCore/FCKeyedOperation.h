@class NSString, NSObject;
@protocol OS_os_log, FCOperationCanceling;

@interface FCKeyedOperation : NSObject <FCOperationCanceling> {
    BOOL _cancelled;
    id<FCOperationCanceling> _cancelHandler;
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
