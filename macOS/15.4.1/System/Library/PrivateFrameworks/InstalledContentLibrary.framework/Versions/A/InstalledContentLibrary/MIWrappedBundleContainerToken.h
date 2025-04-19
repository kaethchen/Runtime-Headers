@class NSURL;

@interface MIWrappedBundleContainerToken : MIBundleContainerToken

@property (readonly, nonatomic) NSURL *wrapperURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainer:(id)a0;

@end
