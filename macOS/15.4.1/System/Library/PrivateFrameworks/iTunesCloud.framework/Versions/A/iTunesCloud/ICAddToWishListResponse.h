@class NSString, NSDictionary;

@interface ICAddToWishListResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSString *message;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
