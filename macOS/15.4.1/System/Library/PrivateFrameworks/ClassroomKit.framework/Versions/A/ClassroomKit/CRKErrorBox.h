@class NSError, NSDictionary;

@interface CRKErrorBox : NSObject <CRKDictionaryCodable>

@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;

@end
