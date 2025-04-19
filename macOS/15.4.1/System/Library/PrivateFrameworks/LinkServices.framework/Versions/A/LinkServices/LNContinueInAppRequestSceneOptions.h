@class NSArray, NSString;

@interface LNContinueInAppRequestSceneOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL supportsNotices;
@property (readonly, nonatomic) NSString *targetContentIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActions:(id)a0 supportsNotices:(BOOL)a1 targetContentIdentifier:(id)a2;
- (id)fbsOpenApplicationOptionsWithActionExecutorOptions:(id)a0;

@end
