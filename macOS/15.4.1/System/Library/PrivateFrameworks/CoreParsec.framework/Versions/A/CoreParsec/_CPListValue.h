@class NSArray, NSData, NSString;

@interface _CPListValue : PBCodable <_CPListValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;

@end
