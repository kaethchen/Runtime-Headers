@class NSMutableDictionary;

@interface SASProximityInformationDictionaryCoder : NSCoder

@property (retain) NSMutableDictionary *dataDictionary;

- (void).cxx_destruct;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)initWithDictionary:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (void)setGrammarInflectionGender:(id)a0;
- (void)setWiFiPassword:(id)a0;
- (void)setWiFiSSID:(id)a0;

@end
