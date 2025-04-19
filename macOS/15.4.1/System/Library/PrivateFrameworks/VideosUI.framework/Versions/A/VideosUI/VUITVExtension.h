@class NSSet;

@interface VUITVExtension : NSObject

@property (class, readonly, nonatomic) NSSet *tvExtensionBundleIDs;
@property (class, readonly, nonatomic) BOOL isRunningInTVExtension;
@property (class, readonly, nonatomic) BOOL isRunningInTVAppExtension;
@property (class, readonly, nonatomic) BOOL isRunningInTVProductPageExtension;

+ (id)sharedInstance;

@end
