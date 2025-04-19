@class NSString;

@interface IMActionComposeText : NSObject <IMChipActionProtocol, IMAttributableContent> {
    void /* unknown type, empty encoding */ phoneNumber;
    void /* unknown type, empty encoding */ text;
}

@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *text;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithPhoneNumber:(id)a0 text:(id)a1;

@end
