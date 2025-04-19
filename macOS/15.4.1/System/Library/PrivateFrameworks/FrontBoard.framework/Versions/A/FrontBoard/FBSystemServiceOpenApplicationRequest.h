@class NSString, FBProcess, FBSOpenApplicationOptions;

@interface FBSystemServiceOpenApplicationRequest : NSObject

@property (nonatomic, getter=isTrusted) BOOL trusted;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) FBSOpenApplicationOptions *options;
@property (retain, nonatomic) FBProcess *clientProcess;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0;

@end
