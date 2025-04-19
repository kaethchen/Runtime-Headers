@protocol WBSPageTestDelegate;

@interface WBSPageTestController : WBSTestController

@property (weak) id<WBSPageTestDelegate> delegate;
@property (readonly, nonatomic) unsigned long long pageTestType;
@property (readonly, nonatomic) BOOL allowsContentJavaScript;
@property (readonly, nonatomic) BOOL allowsNetworkAccess;
@property (readonly, nonatomic) BOOL allowsExtensions;

- (void).cxx_destruct;
- (id)bundleFromNSBundle:(id)a0;
- (id)expectedResultsPathExtension;

@end
