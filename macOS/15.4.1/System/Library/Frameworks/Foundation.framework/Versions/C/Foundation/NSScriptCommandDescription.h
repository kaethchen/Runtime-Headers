@class NSString, NSArray, NSObject;

@interface NSScriptCommandDescription : NSObject <NSCoding> {
    NSString *_suiteName;
    NSString *_plistCommandName;
    unsigned int _classAppleEventCode;
    unsigned int _idAppleEventCode;
    NSString *_objcClassName;
    NSObject *_resultTypeNameOrDescription;
    unsigned int _plistResultTypeAppleEventCode;
    id _moreVars;
}

@property (readonly, copy) NSString *suiteName;
@property (readonly, copy) NSString *commandName;
@property (readonly) unsigned int appleEventClassCode;
@property (readonly) unsigned int appleEventCode;
@property (readonly, copy) NSString *commandClassName;
@property (readonly, copy) NSString *returnType;
@property (readonly) unsigned int appleEventCodeForReturnType;
@property (readonly, copy) NSArray *argumentNames;

+ (id)_argumentDescriptionsFromUnnamedImplDeclaration:(id)a0 presoDeclaration:(id)a1 namedImplDeclarations:(id)a2 presoDeclarations:(id)a3 suiteName:(id)a4 commandName:(id)a5;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_accessGroups;
- (void)_addAccessGroups:(id)a0;
- (BOOL)_hasHiddenParts;
- (unsigned short)_appendEventDeclarationsToAETEData:(id)a0 includingParts:(int)a1;
- (id)_argumentDescriptionForKey:(id)a0;
- (id)_argumentDescriptions;
- (id)_argumentDescriptionsByName;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)_firstPresentableName;
- (id)_initWithProperties:(const struct { id x0; id x1; unsigned int x2; unsigned int x3; id x4; id x5; id x6; id x7; BOOL x8; id x9; id x10; id x11; } *)a0;
- (id)_initWithProperties:(const struct { id x0; id x1; unsigned int x2; unsigned int x3; id x4; id x5; id x6; id x7; BOOL x8; id x9; id x10; id x11; } *)a0 commandName:(id)a1 resultTypeAppleEventCode:(unsigned int)a2;
- (id)_initWithSuiteName:(id)a0 commandName:(id)a1 implDeclaration:(id)a2 presoDeclaration:(id)a3;
- (BOOL)_isFromSDEF;
- (BOOL)_isHidden;
- (BOOL)_matchesAppleEventCode:(unsigned int)a0 classCode:(unsigned int)a1;
- (id)_presentableDescription;
- (id)_presentableNames;
- (id)_presentableResultDescription;
- (void)_reconcileToSuiteRegistry:(id)a0;
- (id)_resultTypeDescription;
- (void)_setAccessGroups:(id)a0;
- (id)_synonymDescriptions;
- (unsigned int)appleEventCodeForArgumentWithName:(id)a0;
- (id)createCommandInstance;
- (id)createCommandInstanceWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuiteName:(id)a0 commandName:(id)a1 dictionary:(id)a2;
- (BOOL)isOptionalArgumentWithName:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)typeForArgumentWithName:(id)a0;

@end
