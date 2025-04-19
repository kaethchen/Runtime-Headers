@class NSArray, NSString, NSMutableArray;

@interface ASDAlertPresentationRequest : NSObject <NSSecureCoding> {
    NSMutableArray *_actions;
    NSString *_iconBundlePath;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) long long icon;
@property (retain, nonatomic) NSString *iconBundlePath;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *logKey;
@property (nonatomic) long long style;

+ (id)requestWithTitle:(id)a0 message:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)addActionWithTitle:(id)a0;
- (id)addActionWithTitle:(id)a0 style:(long long)a1;

@end
