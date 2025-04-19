@class NSString;

@interface VSTwoFactorEntryTextField : NSObject

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) BOOL autoShowKeyboard;
@property (copy, nonatomic) NSString *text;

- (id)init;
- (void).cxx_destruct;

@end
