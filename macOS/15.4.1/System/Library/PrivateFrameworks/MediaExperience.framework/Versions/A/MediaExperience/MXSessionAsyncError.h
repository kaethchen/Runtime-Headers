@class NSString;

@interface MXSessionAsyncError : NSObject <MXSessionErrorProtocol>

@property (readonly, nonatomic) NSString *applicationCausingFailure;
@property (readonly, nonatomic) int error;

- (void)dealloc;
- (id)initWithError:(int)a0 applicationCausingFailure:(id)a1;

@end
