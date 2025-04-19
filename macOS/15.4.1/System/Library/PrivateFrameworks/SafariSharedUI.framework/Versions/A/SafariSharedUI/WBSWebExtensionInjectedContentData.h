@class WBSWebExtensionsController;

@interface WBSWebExtensionInjectedContentData : NSObject {
    WBSWebExtensionsController *_webExtensionsController;
}

+ (id)supportedInjectedContentFeatures;

- (void).cxx_destruct;

@end
