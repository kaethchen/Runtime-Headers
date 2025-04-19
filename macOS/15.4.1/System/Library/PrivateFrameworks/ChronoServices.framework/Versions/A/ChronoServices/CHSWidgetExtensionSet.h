@class NSArray, NSSet;

@interface CHSWidgetExtensionSet : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ widgetExtensionContainers;
    void /* unknown type, empty encoding */ allExtensions;
    void /* unknown type, empty encoding */ equivalentBundleIdentifierResolver;
    void /* unknown type, empty encoding */ iconResolver;
}

@property (nonatomic, copy) NSArray *widgetExtensionContainers;
@property (nonatomic, copy) NSSet *allExtensions;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtensions:(id)a0 equivalentBundleIdentifierResolver:(id)a1 iconResolver:(id)a2;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)a0;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)a0;
- (id)widgetExtensionForExtensionIdentity:(id)a0;

@end
