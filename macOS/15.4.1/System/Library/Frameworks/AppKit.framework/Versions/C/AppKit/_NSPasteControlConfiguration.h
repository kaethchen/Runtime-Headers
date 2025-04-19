@class NSString;

@interface _NSPasteControlConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *localizedTitle;
@property long long displayMode;
@property BOOL enabled;
@property unsigned long long controlSize;
@property unsigned long long lineBreakMode;
@property long long alignment;
@property long long baseWritingDirection;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonPasteControlConfigurationInit;

@end
