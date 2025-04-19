@class NSImage, NSString;

@interface MKAttributeLabelModel : NSObject

@property (retain, nonatomic) NSImage *logo;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double logoVerticalOffset;
@property (retain, nonatomic) NSString *providerName;

- (void).cxx_destruct;
- (id)attributedString;

@end
