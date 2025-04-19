@class EDMessageDecoder;

@interface MCMessageDecoder : NSObject

@property (readonly, nonatomic) EDMessageDecoder *decoder;
@property (readonly, nonatomic) BOOL isUsingDefaultDecoder;

- (void).cxx_destruct;
- (id)initWithDecoder:(id)a0;
- (id)topLevelMIMEPartForMessage:(id)a0 headerData:(id)a1 bodyData:(id)a2 decodeContext:(id)a3;
- (id)topLevelMIMEPartForMessageData:(id)a0 decodeContext:(id)a1;
- (id)topLevelMIMEPartForMessage:(id)a0 messageData:(id)a1 decodeContext:(id)a2;

@end
