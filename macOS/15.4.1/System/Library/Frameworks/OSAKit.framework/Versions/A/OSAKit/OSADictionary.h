@class NSString, NSData, OSADictionaryPrivate;

@interface OSADictionary : NSObject {
    NSString *_name;
    OSADictionaryPrivate *_private;
}

@property (copy) NSString *language;
@property (copy) NSString *name;
@property (copy) NSData *data;
@property (copy) NSString *html;

+ (id)anchorFromName:(id)a0;
+ (id)anchorFromName:(id)a0 _2:(id)a1;
+ (id)anchorFromName:(id)a0 _2:(id)a1 _3:(id)a2;
+ (id)chooseDictionaries;
+ (BOOL)chooseDictionary;

- (void)dealloc;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (void)parse;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)definitions;
- (BOOL)parseData:(id)a0 error:(id *)a1;
- (void)setDefinitions:(id)a0;
- (BOOL)parsed;
- (id)_objectValueForName:(id)a0 fromElement:(id)a1;
- (void)addDefinition:(id)a0;
- (void)addSuiteDefinition:(id)a0;
- (id)classDefinitionWithName:(id)a0;
- (id)classDefinitions;
- (id)classDefinitionsWithName:(id)a0;
- (id)definitionForUniqueIdentifier:(id)a0;
- (id)displayNameForTypeName:(id)a0;
- (void)setClassDefinitions:(id)a0;
- (void)setParsed:(BOOL)a0;
- (void)setSuiteDefinitions:(id)a0;
- (id)suiteDefinitions;

@end
