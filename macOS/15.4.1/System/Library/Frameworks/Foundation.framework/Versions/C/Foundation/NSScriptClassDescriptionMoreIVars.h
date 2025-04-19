@class NSString, NSDictionary, NSArray, NSObject;

@interface NSScriptClassDescriptionMoreIVars : NSObject {
    NSString *defaultSubcontainerAttributeKey;
    NSDictionary *inverseRelationshipKeysByKey;
    NSString *presentableDescription;
    NSObject *presentableNameOrNames;
    NSString *presentablePluralName;
    NSArray *synonymDescriptions;
    BOOL isHidden;
    BOOL isFromLegacyPropertyLists;
    BOOL isSynonym;
    NSDictionary *cachedPropertyDescriptionsByKey;
    NSObject *primitiveTypeNameOrDescription;
}

@end
