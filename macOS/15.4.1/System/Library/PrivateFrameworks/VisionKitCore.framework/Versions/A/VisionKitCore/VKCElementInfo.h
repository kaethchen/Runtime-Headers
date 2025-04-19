@class NSString;

@interface VKCElementInfo : VKCBaseElement

@property (retain, nonatomic) NSString *text;

+ (id)infoWithText:(id)a0 parent:(id)a1;

- (void).cxx_destruct;
- (id)stringValue;
- (id)children;

@end
