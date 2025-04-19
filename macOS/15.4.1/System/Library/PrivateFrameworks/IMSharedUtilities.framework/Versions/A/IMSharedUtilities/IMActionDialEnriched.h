@class NSString;

@interface IMActionDialEnriched : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ fallbackUrl;
    void /* unknown type, empty encoding */ subject;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *fallbackUrl;
@property (nonatomic, readonly) NSString *subject;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPhoneNumber:(id)a0 fallbackUrl:(id)a1 subject:(id)a2;

@end
