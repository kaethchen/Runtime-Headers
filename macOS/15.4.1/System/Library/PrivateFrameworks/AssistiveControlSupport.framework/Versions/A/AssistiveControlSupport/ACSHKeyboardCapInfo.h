@class NSString;

@interface ACSHKeyboardCapInfo : NSObject

@property (copy) NSString *keyCapString;
@property BOOL isDeadKey;

+ (id)keyboardCapInfoWithKeyCapString:(id)a0 isDeadKey:(BOOL)a1;

- (void).cxx_destruct;

@end
