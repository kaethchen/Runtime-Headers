@class AEContents, NSString, NSMutableDictionary, NSMutableArray;

@interface AEClass : NSObject

@property unsigned int code;
@property (retain) NSString *inherits;
@property (retain) NSMutableDictionary *propertiesForNames;
@property (retain) NSMutableDictionary *elementsForNames;
@property (retain) NSString *plural;
@property (retain) AEContents *contents;
@property (retain) NSMutableArray *respondsTo;

+ (id)classWithCode:(unsigned int)a0 inherits:(id)a1;

- (void).cxx_destruct;
- (id)allPropertyNames;
- (void)setProperty:(id)a0 forName:(id)a1;
- (id)element:(id)a0;
- (id)propertyNameForCode:(unsigned int)a0;
- (id)property:(id)a0;
- (id)allElementNames;
- (void)addRespondsTo:(id)a0;
- (id)elementNameForCode:(unsigned int)a0;
- (id)initWithCode:(unsigned int)a0 inherits:(id)a1;
- (void)setElement:(id)a0 forName:(id)a1;

@end
