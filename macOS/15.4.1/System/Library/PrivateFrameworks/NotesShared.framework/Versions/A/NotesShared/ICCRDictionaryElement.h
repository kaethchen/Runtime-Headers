@class ICCRVectorTimestamp;
@protocol ICCRDataType;

@interface ICCRDictionaryElement : NSObject

@property (retain, nonatomic) id<ICCRDataType> value;
@property (retain, nonatomic) ICCRVectorTimestamp *timestamp;

+ (id)temporaryElementWithValue:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)initWithValue:(id)a0 timestamp:(id)a1;
- (void)mergeWith:(id)a0;

@end
