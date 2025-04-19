@class NSString, NSURL;

@interface SSLocalWebResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *siteName;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *cloudTabDeviceName;

+ (BOOL)supportsResult:(id)a0;
+ (id)stringWithUrl:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildDescriptions;

@end
