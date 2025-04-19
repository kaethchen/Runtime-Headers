@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *normalizedDictionary;
@property (readonly, getter=isFreeTrial) BOOL freeTrial;
@property (readonly) double price;
@property (readonly, copy) NSDictionary *dictionary;

+ (id)buyParamsWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)containsKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (id)stringValue;
- (void)clear;
- (id)parameterForKey:(id)a0;
- (void)addBlindedData:(id)a0;
- (id)_convertParsedBuyParamIfNeeded:(id)a0;
- (id)_normalizedDictionary;
- (void)_parseBuyParams:(id)a0;
- (void)_parseBuyParamsArray:(id)a0;
- (id)dictionaryForFPDI;
- (void)removeBlindedData;
- (id)requestDataWithError:(id *)a0;
- (void)setParameter:(id)a0 forKey:(id)a1;

@end
