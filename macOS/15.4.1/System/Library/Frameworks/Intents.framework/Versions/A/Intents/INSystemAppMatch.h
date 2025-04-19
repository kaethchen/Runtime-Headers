@class NSString;

@interface INSystemAppMatch : NSObject

@property (readonly, nonatomic) NSString *iOSBundleIdentifier;
@property (readonly, nonatomic) NSString *macOSBundleIdentifier;
@property (readonly, nonatomic) NSString *watchOSBundleIdentifier;
@property (readonly, nonatomic) NSString *tvOSBundleIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifierForCurrentPlatform;
@property (readonly, nonatomic) BOOL appIsUnavailableOnCurrentPlatform;

+ (id)matchWithiOSBundleIdentifier:(id)a0 macOSBundleIdentifier:(id)a1 watchOSBundleIdentifier:(id)a2 tvOSBundleIdentifier:(id)a3;

- (void).cxx_destruct;
- (id)initWithiOSBundleIdentifier:(id)a0 macOSBundleIdentifier:(id)a1 watchOSBundleIdentifier:(id)a2 tvOSBundleIdentifier:(id)a3;

@end
