@class NSString, NSSet, NSArray, NSDictionary;

@interface CHSWidgetExtensionContainer : NSObject <BSDescriptionProviding> {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ iconResolver;
}

@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) NSString *localizedContainerDisplayName;
@property (nonatomic, readonly) NSSet *allExtensions;
@property (nonatomic, readonly) NSArray *localExtensions;
@property (nonatomic, readonly) NSDictionary *remoteExtensionsByDeviceIdentifier;
@property (nonatomic, readonly) NSString *iconVersion;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)extensionForExtensionIdentity:(id)a0;
- (void)getIconWithCompletion:(id /* block */)a0;
- (id)initWithExtensions:(id)a0 iconResolver:(id)a1;

@end
