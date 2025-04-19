@class NSString;

@interface IMActionDialVideo : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ fallbackUrl;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *fallbackUrl;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPhoneNumber:(id)a0 fallbackUrl:(id)a1;

@end
