@class NSString, AMDescriptionViewItem, NSSet, NSDictionary, NSImage, NSMutableSet, NSMutableArray, AMBundleAction;

@interface AMVariable : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_providesDictionary;
    NSMutableSet *_children;
    NSMutableArray *_childrenUUIDs;
}

@property (class, readonly, nonatomic) NSDictionary *_variableIdentifiersToTypes;
@property (class, readonly, nonatomic) NSDictionary *_variableSpecificIdentifiersToIdentifiers;
@property (class, readonly, nonatomic) NSDictionary *_variableIdentifiersToTemplateIdentifiers;
@property (class, readonly, nonatomic) AMBundleAction *sharedRunShellScriptAction;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) id storedEvaluatedValue;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id value;
@property (copy) NSString *type;
@property (copy) NSString *identifier;
@property (copy, nonatomic) NSDictionary *providesDictionary;
@property (getter=isCached, setter=setCached:) BOOL cached;
@property (retain) NSImage *icon;
@property (copy) NSString *UUID;
@property (retain, nonatomic) NSString *pathValue;
@property (retain, nonatomic) NSMutableArray *childrenUUIDs;
@property (retain, nonatomic) NSMutableSet *children;
@property (retain, nonatomic) id format;
@property (readonly, nonatomic) NSString *nameWithVariableForm;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (readonly, nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) BOOL isChild;
@property (readonly, nonatomic) BOOL am_isText;
@property (readonly, nonatomic) BOOL isPath;
@property (readonly, nonatomic) BOOL isAppleScript;
@property (readonly, nonatomic) BOOL isShellScript;
@property (readonly, nonatomic) BOOL isCurrentDate;
@property (readonly, nonatomic) BOOL isCurrentTime;
@property (readonly, nonatomic) BOOL isStorage;
@property (readonly, nonatomic) BOOL isLeaf;
@property (readonly, nonatomic) NSString *UUIDWithVariableForm;
@property (readonly, nonatomic) NSDictionary *propertyList;
@property (readonly, nonatomic) BOOL hasChildren;
@property (readonly, nonatomic) NSSet *dependentVariables;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSString *userDescription;
@property (readonly, nonatomic) AMDescriptionViewItem *_descriptionViewItem;
@property (readonly, nonatomic) NSString *evaluatedStringValue;

+ (BOOL)checkVariablesDirectoryOnDisk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)addChild:(id)a0;
- (long long)localizedCaseInsensitiveCompare:(id)a0;
- (void)removeChild:(id)a0;
- (void)addChildren:(id)a0;
- (BOOL)writeToDisk;
- (id)eventDidFail:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withError:(id)a1;
- (id)AppleScriptValue;
- (id)_commandLineValueWithCommand:(id)a0 arguments:(id)a1;
- (id)addressBookValue;
- (BOOL)canAddChild:(id)a0;
- (id)commandLineValue;
- (id)computerNameValue;
- (void)convertTemplateIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0 newChildren:(BOOL)a1;
- (id)currentDateTimeValue;
- (id)evaluatedPathValueForceEvaluation:(BOOL)a0;
- (id)evaluatedStringValueForceEvaluation:(BOOL)a0;
- (id)evaluatedValueForceEvaluation:(BOOL)a0;
- (id)hostNameValue;
- (id)initWithName:(id)a0 identifier:(id)a1 value:(id)a2;
- (BOOL)isAMVariable__;
- (id)menuWithRepresentedObject:(id)a0 target:(id)a1;
- (id)osVersionValue;
- (id)randomIdentifierValue;
- (id)randomNumberValue;
- (BOOL)removeFromDisk;
- (void)renameUniquelyWithExistingVariableNames:(id)a0;
- (void)replaceChild:(id)a0 withChild:(id)a1;
- (id)shellScriptValue;
- (id)userNameValue;

@end
