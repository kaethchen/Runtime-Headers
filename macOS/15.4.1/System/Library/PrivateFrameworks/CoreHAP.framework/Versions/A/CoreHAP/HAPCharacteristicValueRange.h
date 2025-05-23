@class NSData, NSString;

@interface HAPCharacteristicValueRange : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *lowerBound;
@property (retain, nonatomic) NSData *upperBound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLowerBound:(id)a0 upperBound:(id)a1;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;

@end
