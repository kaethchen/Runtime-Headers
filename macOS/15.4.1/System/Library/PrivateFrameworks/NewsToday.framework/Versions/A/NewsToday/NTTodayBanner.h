@class NSString, NSURL, NSArray;

@interface NTTodayBanner : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *actionButtonText;
@property (readonly, nonatomic) unsigned long long imageMethod;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) unsigned long long backgroundMethod;
@property (readonly, copy, nonatomic) NSArray *solidBackgroundColorPair;
@property (readonly, copy, nonatomic) NSArray *gradientBackgroundPair;
@property (readonly, nonatomic) unsigned long long numberOfAppearancesToHide;
@property (readonly, nonatomic) unsigned long long numberOfTapsToHide;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 body:(id)a2 actionURL:(id)a3 actionButtonText:(id)a4 imageMethod:(unsigned long long)a5 imageURL:(id)a6 backgroundMethod:(unsigned long long)a7 solidBackgroundColorPair:(id)a8 gradientBackgroundPair:(id)a9 numberOfAppearancesToHide:(unsigned long long)a10 numberOfTapsToHide:(unsigned long long)a11;

@end
