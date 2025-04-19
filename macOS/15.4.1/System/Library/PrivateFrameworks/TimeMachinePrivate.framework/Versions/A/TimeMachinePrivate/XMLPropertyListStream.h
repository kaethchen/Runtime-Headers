@class NSMutableArray, NSFileHandle;

@interface XMLPropertyListStream : NSObject {
    NSMutableArray *_nodeStack;
}

@property (readonly) NSFileHandle *fileHandle;

+ (id)streamWithFileHandle:(id)a0;

- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)writeInt:(int)a0;
- (void)beginDictionary;
- (void)beginArray;
- (id)initWithFileHandle:(id)a0;
- (void)writeString:(id)a0;
- (void)writeBoolean:(BOOL)a0;
- (void)writeDate:(id)a0;
- (void)writeNumber:(id)a0;
- (void)_writeStringValue:(id)a0 inNodeOfType:(int)a1;
- (void)endPropertyList;
- (void)_closeAllOpenNodes;
- (void)_closeLastNodeOfType:(int)a0;
- (id)_copyIndentedStringWithFormat:(id)a0;
- (int)_currentIndentationLevel;
- (id)_elementNameForNodeType:(int)a0;
- (int)_nodeTypeForNumber:(id)a0;
- (id)_numberForNodeType:(int)a0;
- (id)_popLastNodeType;
- (void)_pushNodeOfType:(int)a0;
- (void)_writeClosingElementForNodeType:(int)a0;
- (void)_writeKey:(id)a0;
- (void)_writeObject:(id)a0;
- (void)_writeOpeningElementForNodeType:(int)a0;
- (void)_writeStringToStream:(id)a0;
- (void)_writeStringValueEncodingXMLEntities:(id)a0 inNodeOfType:(int)a1;
- (void)beginArrayForKey:(id)a0;
- (void)beginDictionaryForKey:(id)a0;
- (void)beginPropertyList;
- (void)endLastArray;
- (void)endLastDictionary;
- (int)lastOpenNodeType;
- (void)writeArray:(id)a0;
- (void)writeArray:(id)a0 forKey:(id)a1;
- (void)writeBoolean:(BOOL)a0 forKey:(id)a1;
- (void)writeData:(id)a0 forKey:(id)a1;
- (void)writeDate:(id)a0 forKey:(id)a1;
- (void)writeDictionary:(id)a0;
- (void)writeDictionary:(id)a0 forKey:(id)a1;
- (void)writeFloat:(float)a0;
- (void)writeFloat:(float)a0 forKey:(id)a1;
- (void)writeInt:(int)a0 forKey:(id)a1;
- (void)writeNumber:(id)a0 forKey:(id)a1;
- (void)writeString:(id)a0 forKey:(id)a1;

@end
