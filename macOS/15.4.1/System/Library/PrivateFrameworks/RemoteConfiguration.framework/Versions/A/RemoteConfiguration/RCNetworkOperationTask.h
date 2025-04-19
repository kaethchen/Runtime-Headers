@class NSString, NSHTTPURLResponse, NSData, NSMutableData;

@interface RCNetworkOperationTask : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSMutableData *dataStore;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)receiveData:(id)a0;
- (void)receiveHTTPResponse:(id)a0;

@end
