@class NSImage, NSString, NSError;

@interface MEComposeExtensionValidationError : NSObject

@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSString *extensionDisplayName;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithExtensionName:(id)a0 icon:(id)a1 error:(id)a2;

@end
