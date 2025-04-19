@class NSArray, NSString, NSData, NSObject;
@protocol NFAppletCollection;

@interface NFApplet : NSObject <NSSecureCoding, NSCopying> {
    NSObject<NFAppletCollection> *_appletCollection;
    NSData *_groupHeadIDAsData;
    NSArray *_groupMemberIDs;
    NSArray *_referencedAppIDs;
    NSData *_packageIdentifierAsData;
    NSData *_moduleIdentifierAsData;
    NSArray *_multiSEApplicationGroupMemberIDs;
    NSData *_typeFSystemCode;
    unsigned char _groupActivationStyle;
    BOOL _isContainer;
    BOOL _isProxy;
    unsigned char _appletGPState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) NSObject<NFAppletCollection> *appletCollection;
@property (readonly, nonatomic) NSArray *groupMemberIDs;
@property (readonly, nonatomic) NSString *groupHeadID;
@property (readonly, nonatomic) NSArray *multiSEGroupMemberIDs;
@property (readonly, nonatomic) NSString *moduleIdentifier;
@property (readonly, nonatomic) NSData *moduleIdentifierAsData;
@property (readonly, nonatomic) unsigned long long rawGPState;
@property (readonly, nonatomic) BOOL isContainer;
@property (readonly, nonatomic) BOOL isProxy;
@property (readonly) unsigned char groupActivationStyle;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *seIdentifier;
@property (readonly, retain, nonatomic) NSData *identifierAsData;
@property (readonly, retain, nonatomic) NSData *discretionaryData;
@property (readonly, retain, nonatomic) NSString *packageIdentifier;
@property (readonly, retain, nonatomic) NFApplet *groupHead;
@property (readonly, retain, nonatomic) NSArray *groupMembers;
@property (readonly, retain, nonatomic) NSArray *referencedApps;
@property (readonly, nonatomic) unsigned char family;
@property (readonly, nonatomic) unsigned char lifecycleState;
@property (readonly, nonatomic) unsigned char activationState;
@property (readonly, nonatomic) unsigned char supportedTypeFSystem;
@property (readonly, nonatomic) long long seOS;
@property (readonly, nonatomic) BOOL authTransientSupport;
@property (readonly, nonatomic) BOOL authTransientConfigurable;
@property (readonly, nonatomic) BOOL isTypeF;
@property (readonly, nonatomic) BOOL suppressTypeB;
@property (readonly, nonatomic) BOOL suppressTypeA;
@property (readonly, nonatomic) BOOL isGPLocked;
@property (readonly, nonatomic) BOOL containsSubKeys;
@property (readonly, nonatomic) BOOL managedBySP;
@property (readonly, nonatomic) NSData *instanceACL;

+ (id)aidListForPrinting:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (id)groupHeadID;
- (id)packageIdentifier;
- (id)moduleIdentifier;
- (id)multiSSDMembers;
- (void)setInstanceACL:(id)a0;
- (void)_initManagedBySP;
- (void)_setIsActive:(BOOL)a0;
- (BOOL)isEqualToApplet:(id)a0;
- (BOOL)isPPSEControllable;

@end
