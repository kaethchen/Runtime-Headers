@class NSString, NSArray, NSObject;

@interface NSScriptAttributeDescription : NSScriptPropertyDescription {
    unsigned int _appleEventCode;
    NSString *_presentableDescription;
    NSObject *_presentableNameOrNames;
    NSArray *_synonymDescriptions;
}

+ (id)propertyDescriptionFromKey:(id)a0 implDeclaration:(id)a1 presoDeclaration:(id)a2 suiteName:(id)a3 className:(id)a4;

- (void)dealloc;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (id)_termedDescriptionWithTabCount:(unsigned long long)a0 propertyKindName:(id)a1;
- (unsigned short)appendPropertyDeclarationsToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)firstPresentableName;
- (id)initWithKey:(id)a0 type:(id)a1 access:(unsigned long long)a2 appleEventCode:(unsigned int)a3 isHidden:(BOOL)a4 presentableDescription:(id)a5 name:(id)a6 synonymDescriptions:(id)a7 accessGroupDescriptions:(id)a8;
- (id)initWithKey:(id)a0 type:(id)a1 isReadOnly:(BOOL)a2 appleEventCode:(unsigned int)a3 presentableDescription:(id)a4 nameOrNames:(id)a5;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (BOOL)matchesPresentableName:(id)a0;
- (id)presentableDescription;
- (id)presentableNames;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 className:(id)a2;

@end
