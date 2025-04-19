@class NSString, NSArray, MTLFunctionConstantValues, NSDictionary;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; NSArray *binaryArchives; BOOL applyFunctionConstants; NSArray *privateFunctions; } _private;
    unsigned long long _pipelineOptions;
    NSDictionary *_pluginData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *binaryArchives;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)functionDescriptor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)setName:(id)a0;
- (unsigned long long)options;
- (unsigned long long)pipelineOptions;
- (id)constantValues;
- (id)formattedDescription:(unsigned long long)a0;
- (id)pluginData;
- (id)privateFunctions;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (void)setConstantValues:(id)a0;
- (void)setPipelineOptions:(unsigned long long)a0;
- (void)setPluginData:(id)a0;
- (void)setPrivateFunctions:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)setSpecializedName:(id)a0;
- (id)specializedName;
- (BOOL)applyFunctionConstants;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;

@end
