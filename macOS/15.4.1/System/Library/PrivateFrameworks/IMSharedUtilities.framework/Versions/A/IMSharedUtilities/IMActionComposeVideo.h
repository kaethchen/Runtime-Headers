@class NSString;

@interface IMActionComposeVideo : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ phoneNumber;
}

@property (nonatomic, readonly) NSString *phoneNumber;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPhoneNumber:(id)a0;

@end
