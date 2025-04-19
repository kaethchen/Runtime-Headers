@class CHSExtensionIdentity, NSString, NSArray, CHSWidgetRelevanceKey;

@interface CHSWidgetRelevanceProperties : NSObject <NSSecureCoding, NSCopying, CHSWidgetIdentifiable> {
    id /* block */ _relevanceFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidgetRelevanceKey *key;
@property (readonly, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) BOOL supportsBackgroundRefresh;
@property (readonly, nonatomic) double lastRelevanceUpdate;
@property (readonly, nonatomic) NSArray *relevances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matches:(id)a0;
- (id)initWithSupportsBackgroundRefresh:(BOOL)a0 lastRelevanceUpdate:(double)a1 relevances:(id)a2;
- (id)initWithWidgetExtensionIdentity:(id)a0 kind:(id)a1 supportsBackgroundRefresh:(BOOL)a2 lastRelevanceUpdate:(double)a3 relevanceFunction:(id /* block */)a4;
- (id)initWithWidgetExtensionIdentity:(id)a0 kind:(id)a1 supportsBackgroundRefresh:(BOOL)a2 lastRelevanceUpdate:(double)a3 relevances:(id)a4;
- (id)initWithWidgetRelevanceKey:(id)a0 supportsBackgroundRefresh:(BOOL)a1 lastRelevanceUpdate:(double)a2 relevances:(id)a3;

@end
