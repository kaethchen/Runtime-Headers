@class NSString, NSArray, NSObject;

@interface NSScriptRecordFieldDescription : NSObject {
    NSString *_key;
    NSObject *_typeNameOrDescription;
    unsigned int _appleEventCode;
    BOOL _isHidden;
    NSString *_presentableDescription;
    NSString *_presentableName;
    NSArray *_synonymDescriptions;
}

- (void)dealloc;
- (BOOL)isHidden;
- (id)presentableName;
- (id)key;
- (id)typeDescription;
- (void)appendPropertyDeclarationToAETEData:(id)a0;
- (unsigned int)appleEventCode;
- (id)initWithKey:(id)a0 type:(id)a1 appleEventCode:(unsigned int)a2 isHidden:(BOOL)a3 presentableDescription:(id)a4 name:(id)a5 synonymDescriptions:(id)a6;
- (id)initWithKey:(id)a0 typeDescription:(id)a1 appleEventCode:(unsigned int)a2 presentableDescription:(id)a3 name:(id)a4;
- (BOOL)matchesAppleEventCode:(unsigned int)a0;
- (id)presentableDescription;
- (void)reconcileToSuiteRegistry:(id)a0 suiteName:(id)a1 recordTypeName:(id)a2;
- (id)synonymDescriptions;

@end
