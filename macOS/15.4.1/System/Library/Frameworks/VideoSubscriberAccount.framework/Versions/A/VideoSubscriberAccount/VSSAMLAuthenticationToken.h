@class NSData, NSString, NSDate;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken>

@property (copy, nonatomic) NSData *serializedData;
@property (retain, nonatomic) NSDate *simulatedExpirationDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *body;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setExpirationDate:(id)a0;
- (BOOL)isOpaque;
- (id)initWithSerializedData:(id)a0;
- (BOOL)isFromUnsupportedProvider;

@end
