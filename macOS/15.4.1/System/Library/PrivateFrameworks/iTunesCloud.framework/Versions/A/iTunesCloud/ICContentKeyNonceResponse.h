@class NSData;

@interface ICContentKeyNonceResponse : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSData *nonceData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
