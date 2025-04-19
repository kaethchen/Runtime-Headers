@class NSURL, NSDictionary;

@interface LSBundleWrapperStagingReceipt : NSObject

@property (readonly) NSURL *wrappedBundleURL;
@property (readonly) NSDictionary *wrappedBundleInfo;

- (void).cxx_destruct;
- (id)initWithWrappedBundleURL:(id)a0 wrappedBundleInfo:(id)a1;

@end
