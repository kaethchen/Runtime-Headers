@protocol VCControlChannelMessageProtocol;

@interface VCSessionMessageBufferElement : NSObject

@property (readonly, nonatomic) id<VCControlChannelMessageProtocol> message;
@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) long long retryNumber;

- (void)dealloc;
- (id)initWithMessage:(id)a0 sequenceNumber:(unsigned long long)a1 retryNumber:(unsigned long long)a2;

@end
