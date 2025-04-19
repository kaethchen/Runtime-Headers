@class NSString, NSImage;

@interface UXBarItem : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
