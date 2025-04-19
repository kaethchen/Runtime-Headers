@class NSString, NSUUID, DNDModeSymbolDescriptor, NSURL;

@interface DNDMode : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy) NSString *defaultTintColorName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *symbolImageName;
@property (readonly, copy) NSString *tintColorName;
@property (readonly, copy) DNDModeSymbolDescriptor *symbolDescriptor;
@property (readonly, copy) NSString *name;
@property (readonly) long long semanticType;
@property (readonly, copy) NSString *modeIdentifier;
@property (readonly, copy) NSUUID *identifier;
@property (getter=isPlaceholder) BOOL placeholder;
@property (readonly) unsigned long long visibility;
@property (readonly, copy) NSURL *settingsURL;
@property (readonly, copy) NSURL *setupURL;

+ (id)defaultMode;
+ (id)defaultReduceInterruptionsMode;
+ (unsigned long long)maxUIAddableModes;
+ (id)placeholderModeFromMode:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_name;
- (id)_initWithMode:(id)a0;
- (id)_symbolImageName;
- (id)_tintColorName;
- (id)initWithName:(id)a0 modeIdentifier:(id)a1 symbolImageName:(id)a2 tintColorName:(id)a3 semanticType:(long long)a4;
- (id)initWithName:(id)a0 modeIdentifier:(id)a1 symbolImageName:(id)a2 tintColorName:(id)a3 symbolDescriptor:(id)a4 semanticType:(long long)a5 visibility:(unsigned long long)a6 identifier:(id)a7;

@end
