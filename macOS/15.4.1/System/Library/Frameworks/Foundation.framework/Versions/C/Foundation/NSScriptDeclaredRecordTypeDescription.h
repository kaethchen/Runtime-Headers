@class NSString, NSArray;

@interface NSScriptDeclaredRecordTypeDescription : NSScriptRecordTypeDescription {
    NSString *_name;
    unsigned int _appleEventCode;
    NSArray *_fieldDescriptions;
    BOOL _isHidden;
    NSString *_presentableDescription;
}

- (void)dealloc;
- (id)name;
- (BOOL)isHidden;
- (id)_descriptionWithTabCount:(unsigned long long)a0;
- (void)appendObjectClassDeclarationToAETEData:(id)a0 includingParts:(int)a1;
- (unsigned int)appleEventCode;
- (id)fieldDescriptionForAppleEventCode:(unsigned int)a0;
- (id)fieldDescriptionForKey:(id)a0;
- (id)fieldDescriptions;
- (BOOL)hasHiddenParts;
- (id)initWithName:(id)a0 appleEventCode:(unsigned int)a1 fieldDescriptions:(id)a2 isHidden:(BOOL)a3 presentableDescription:(id)a4;
- (id)presentableDescription;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1;

@end
