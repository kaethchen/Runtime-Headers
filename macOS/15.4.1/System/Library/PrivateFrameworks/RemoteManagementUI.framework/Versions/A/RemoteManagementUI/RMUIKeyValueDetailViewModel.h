@class NSString;

@interface RMUIKeyValueDetailViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *viewID;
@property (retain) NSString *title;
@property (retain) NSString *value;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 value:(id)a1;
- (void)clearModel;

@end
