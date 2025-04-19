@class NSString, NSURL;

@interface GTUnarchivablePackage : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fileURL:(id)a1;

@end
