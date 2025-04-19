@class ECRawMessageHeaders, NSData;

@interface ECDKIMVerifiableMessage : NSObject

@property (readonly, nonatomic) ECRawMessageHeaders *headers;
@property (readonly, copy, nonatomic) NSData *bodyData;

- (void).cxx_destruct;
- (id)initWithHeaders:(id)a0 bodyData:(id)a1;

@end
