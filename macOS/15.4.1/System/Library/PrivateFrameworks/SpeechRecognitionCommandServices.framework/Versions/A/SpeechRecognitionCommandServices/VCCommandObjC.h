@class NSString, NSDictionary;

@interface VCCommandObjC : NSObject {
    void /* unknown type, empty encoding */ representedCommand;
}

@property (nonatomic, readonly) NSString *commandIdentifier;
@property (nonatomic, readonly) NSDictionary *commandProperties;

+ (id)allCommandIdentifiers;
+ (id)allCommandIdentifiersForCurrentDevice;
+ (id)allCommandIdentifiersForIPadDevice;
+ (id)allCommandIdentifiersForIPhoneDevice;
+ (id)allCommandIdentifiersForIPodDevice;
+ (id)allCommandIdentifiersForMacDevice;
+ (id)allCommandIdentifiersForVisionDevice;
+ (id)commandWithIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
