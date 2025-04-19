@class NSString, NSArray;

@interface ICNFIMAPOtherResponse : ICNFIMAPResponse

@property (copy, nonatomic) NSString *responseName;
@property (copy, nonatomic) NSArray *parameters;

- (id)description;
- (void).cxx_destruct;

@end
