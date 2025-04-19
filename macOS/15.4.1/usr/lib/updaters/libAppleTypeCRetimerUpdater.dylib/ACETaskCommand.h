@class NSString, NSData;

@interface ACETaskCommand : NSObject

@property (readonly) unsigned int code;
@property (readonly) NSString *codeString;
@property (readonly) NSData *inputData;

- (id)description;
- (id)init;
- (id)initWithFourCharacterCode:(unsigned int)a0;

@end
