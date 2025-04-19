@class NSData, NSDictionary;

@interface ICAuthorizeMachineResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSData *keybagData;
@property (readonly, copy, nonatomic) NSData *tokenData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
