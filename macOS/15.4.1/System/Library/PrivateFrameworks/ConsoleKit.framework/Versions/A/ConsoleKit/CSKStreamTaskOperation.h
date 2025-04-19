@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) BOOL delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)name;
- (void).cxx_destruct;
- (BOOL)isReady;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (void)main;
- (id)initWithTask:(id)a0;
- (void)_signalDelegateDidFinishIfNeeded;

@end
