@class NSData, NSHTTPURLResponse;

@interface AKAccountRecoveryResponse : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSHTTPURLResponse *httpResponse;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 httpResponse:(id)a1;

@end
