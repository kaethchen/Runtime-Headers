@class NSString, NSArray;

@interface ICNFIMAPNamespaceExtension : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *flags;

- (id)description;
- (void).cxx_destruct;

@end
