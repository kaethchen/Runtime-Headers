@class NSMutableDictionary;

@interface AEEnumeration : NSObject

@property unsigned int code;
@property (retain) NSMutableDictionary *enumerators;

+ (id)enumerationWithCode:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithCode:(unsigned int)a0;
- (id)enumeratorNames;
- (unsigned int)getEnumeratorCodeForName:(id)a0;
- (id)getEnumeratorNameForCode:(unsigned int)a0;
- (void)setEnumeratorCode:(unsigned int)a0 forName:(id)a1;

@end
