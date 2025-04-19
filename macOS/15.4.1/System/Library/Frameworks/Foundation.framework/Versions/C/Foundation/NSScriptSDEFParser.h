@class NSString, NSBundle, NSData, NSDictionary, NSMutableArray, NSArray;

@interface NSScriptSDEFParser : NSObject <NSXMLParserDelegate> {
    NSData *_data;
    NSBundle *_bundle;
    NSDictionary *_descriptionCreationMethodsByElementName;
    NSDictionary *_validSubelementNamesPerArrayElementName;
    NSMutableArray *_elementsBeingParsed;
    NSArray *_suiteDescriptions;
    BOOL _parsesCocoaElements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)_accessValueForAttributeKey:(id)a0 fromElement:(id)a1;
- (id)_classNameFromElement:(id)a0 withName:(id)a1;
- (id)_argumentKeyFromElement:(id)a0 withName:(id)a1;
- (BOOL)_booleanValueForAttributeKey:(id)a0 fromElement:(id)a1;
- (BOOL)_booleanValueForCocoaAttributeKey:(id)a0 fromElement:(id)a1;
- (id)_createAccessGroupDescriptionFromElement:(id)a0;
- (id)_createArgumentDescriptionFromElement:(id)a0;
- (id)_createClassDescriptionFromElement:(id)a0;
- (id)_createClassExtensionDescriptionFromElement:(id)a0;
- (id)_createCocoaDescriptionFromElement:(id)a0;
- (id)_createCommandDescriptionFromElement:(id)a0;
- (id)_createEnumerationDescriptionFromElement:(id)a0;
- (id)_createEnumeratorDescriptionFromElement:(id)a0;
- (id)_createPropertyDescriptionFromElement:(id)a0;
- (id)_createRecordTypeDescriptionFromElement:(id)a0;
- (id)_createRespondsToDescriptionFromElement:(id)a0;
- (id)_createResultDescriptionFromElement:(id)a0;
- (id)_createSuiteDescriptionArrayFromDictionaryElement:(id)a0;
- (id)_createSuiteDescriptionFromElement:(id)a0;
- (id)_createSynonymDescriptionFromElement:(id)a0;
- (id)_createToManyRelationshipDescriptionFromElement:(id)a0;
- (id)_createToOneRelationshipDescriptionFromElement:(id)a0;
- (id)_createTypeDescriptionFromElement:(id)a0;
- (id)_createValueTypeDescriptionFromElement:(id)a0;
- (id)_currentSuiteName;
- (id)_implementationAttribute:(id)a0 fromElement:(id)a1 withName:(id)a2 capitalizing:(BOOL)a3;
- (id)_methodSelectorFromElement:(id)a0 withName:(id)a1;
- (unsigned long long)_propertyAccessFromElement:(id)a0;
- (id)_propertyKeyFromElement:(id)a0 withName:(id)a1;
- (id)_typeNameFromElement:(id)a0 isOptional:(BOOL)a1;
- (id)_valueForOptionalCocoaAttributeKey:(id)a0 fromElement:(id)a1;
- (id)_valueForRequiredCocoaAttributeKey:(id)a0 fromElement:(id)a1;
- (id)initWithDataNoCopy:(id)a0;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)setBundle:(id)a0;
- (void)setParsesCocoaElements:(BOOL)a0;
- (id)suiteDescriptions;

@end
