@class NSString, NSArray;

@interface ICNFIMAPNamespace : NSObject

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *separator;
@property (copy, nonatomic) NSArray *extensions;

- (id)description;
- (void).cxx_destruct;

@end
