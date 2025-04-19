@class NSString;

@interface Settings.SidebarSection : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ content;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
