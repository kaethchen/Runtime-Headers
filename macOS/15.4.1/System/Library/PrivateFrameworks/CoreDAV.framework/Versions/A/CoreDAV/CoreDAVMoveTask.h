@class NSString;
@protocol CoreDAVMoveTaskDelegate;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask

@property (weak, nonatomic) id<CoreDAVMoveTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousETag;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (void)_callBackToDelegateWithResponses:(id)a0 error:(id)a1;

@end
