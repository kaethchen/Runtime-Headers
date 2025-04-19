@class NSData, NSDictionary;

@interface ICPlayInfoResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) NSData *playInfoData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;

@end
