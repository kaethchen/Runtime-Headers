@class NSString, NSDictionary;

@interface KHEditorDisplayFilter : NSObject

@property (readonly, copy) NSString *localizedTitle;
@property (retain) NSDictionary *userInfo;
@property BOOL isDefault;
@property long long tag;
@property (copy) NSString *accessibilityHelp;

+ (id)filterWithTitle:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
