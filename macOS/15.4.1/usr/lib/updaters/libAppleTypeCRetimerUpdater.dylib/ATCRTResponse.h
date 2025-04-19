@interface ATCRTResponse : NSObject {
    void /* function */ *_resultDescFunc;
}

@property (readonly) unsigned int code;
@property (readonly) unsigned char result;
@property (readonly) BOOL success;

- (id)description;
- (id)init;
- (id)initWithFourCharacterCode:(unsigned int)a0 byte0:(unsigned char)a1 resultDescriptionFunction:(void /* function */ *)a2;

@end
