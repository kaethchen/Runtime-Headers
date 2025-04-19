@class NSString, NSData;

@interface WFShortcutDropletMetadata : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *shortcutIdentifier;
@property (readonly, nonatomic) NSString *linkActionIdentifier;
@property (readonly, nonatomic) NSString *linkBundleIdentifier;
@property (readonly, nonatomic) NSData *serializedLNAction;

+ (id)metadataOfMainBundle;
+ (id)metadataOfDroplet:(id)a0;

- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (id)initWithVersion:(unsigned long long)a0 serializedLNAction:(id)a1 actionIdentifier:(id)a2 bundleIdentifier:(id)a3;
- (id)initWithVersion:(unsigned long long)a0 shortcutIdentifier:(id)a1;

@end
