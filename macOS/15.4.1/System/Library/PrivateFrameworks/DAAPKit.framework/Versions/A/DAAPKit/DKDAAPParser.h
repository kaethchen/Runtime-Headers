@class NSMutableArray, NSInputStream;
@protocol DKDAAPParserDelegate;

@interface DKDAAPParser : NSObject

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSMutableArray *containerStack;
@property (nonatomic, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<DKDAAPParserDelegate> delegate;
@property (readonly, nonatomic) long long state;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithStream:(id)a0;
- (void)cancel;
- (void)parse;
- (void)_callDelegateDidCancel;
- (void)_callDelegateDidEndContainerCode:(unsigned int)a0;
- (void)_callDelegateDidFailWithError:(id)a0;
- (void)_callDelegateDidFinish;
- (void)_callDelegateDidParseDataCode:(unsigned int)a0 bytes:(char *)a1 contentLength:(unsigned int)a2;
- (void)_callDelegateDidStart;
- (void)_callDelegateDidStartContainerCode:(unsigned int)a0 contentLength:(unsigned int)a1;
- (BOOL)_callDelegateShouldParseCode:(unsigned int)a0;
- (BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned int)a0;
- (void)_verifyExpectedEOF;

@end
