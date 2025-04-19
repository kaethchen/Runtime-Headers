@interface ALSCTrivialGreenClient : NSObject <ALSCGreenClientProtocol>

@property (nonatomic) BOOL calculatedKey2Value;
@property (readonly, nonatomic) BOOL valuesFinalized;
@property (readonly, nonatomic) BOOL key1Value;
@property (readonly, nonatomic) BOOL key2Value;
@property (readonly, nonatomic) BOOL key3Value;

+ (id)_skuRegionCode;

- (id)init;
- (id)_initWithSKURegionCode:(id)a0 key2EnablingSKURegionCodes:(id)a1;

@end
