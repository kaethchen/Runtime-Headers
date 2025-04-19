@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)localExtensions;
- (void)deregisterLocalExtension:(id)a0;
- (id)localExtensionForIdentifier:(id)a0;
- (void)registerLocalExtension:(id)a0;

@end
