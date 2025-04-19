@class NSData, NSError;

@interface SignatureResponse : NSObject

@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
