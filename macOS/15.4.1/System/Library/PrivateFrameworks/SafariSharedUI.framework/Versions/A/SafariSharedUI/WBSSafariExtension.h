@class WBSExtensionsController, NSUUID, NSString, NSURL, NSDictionary, NSArray;

@interface WBSSafariExtension : NSObject

@property (weak, nonatomic) WBSExtensionsController *extensionsController;
@property (retain, nonatomic) NSURL *safariExtensionBaseURI;
@property (readonly, nonatomic) NSUUID *baseURIHost;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (nonatomic) struct __SecCode { } *bundleCodeRef;
@property (copy, nonatomic) NSDictionary *untrustedCodeSigningDictionary;
@property (copy, nonatomic) NSArray *injectedScripts;
@property (copy, nonatomic) NSArray *injectedStyleSheets;
@property (retain, nonatomic) NSUUID *privacyPreservingProfileIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 extensionsController:(id)a1;

@end
