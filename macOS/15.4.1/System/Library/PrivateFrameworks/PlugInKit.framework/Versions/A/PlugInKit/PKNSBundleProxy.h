@class NSBundle, NSString, NSURL, NSDictionary;

@interface PKNSBundleProxy : NSObject <PKNSBundleProxy>

@property (readonly) NSBundle *_underlyingNSBundle;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly) Class principalClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
