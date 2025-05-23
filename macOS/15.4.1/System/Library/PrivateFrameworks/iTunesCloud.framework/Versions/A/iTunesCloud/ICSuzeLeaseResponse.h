@class NSDictionary, NSData, NSDate;

@interface ICSuzeLeaseResponse : NSObject {
    NSDate *_requestDate;
}

@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, copy, nonatomic) NSData *clientData;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0 requestDate:(id)a1;

@end
