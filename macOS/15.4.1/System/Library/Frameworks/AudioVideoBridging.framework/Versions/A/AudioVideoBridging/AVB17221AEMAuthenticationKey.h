@class NSData;

@interface AVB17221AEMAuthenticationKey : NSObject

@property (nonatomic) unsigned char keyType;
@property (copy, nonatomic) NSData *keyData;

+ (id)authenticationKeyOfType:(unsigned char)a0 withData:(id)a1;

- (void).cxx_destruct;
- (void)_makeItMutable;

@end
