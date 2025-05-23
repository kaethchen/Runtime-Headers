@class NSString, NSDictionary, NSURL, NSData;

@interface PKPaymentSetupMoreInfoItem : NSObject <NSSecureCoding, NSCopying> {
    BOOL _hideAlternativeAction;
    NSString *_nextActionOverride;
    NSString *_doneActionOverride;
    NSString *_alternativeActionOverride;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *linkText;
@property (readonly, copy, nonatomic) NSURL *linkURL;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasAlternativeAction;
@property (readonly, copy, nonatomic) NSString *nextAction;
@property (readonly, copy, nonatomic) NSString *doneAction;
@property (readonly, copy, nonatomic) NSString *alternativeAction;
@property (readonly, copy, nonatomic) NSDictionary *reportingMetadata;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSData *imageData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateActionStrings;
- (id)initWithMoreInfoDictionary:(id)a0;
- (id)initWithMoreInfoDictionary:(id)a0 imageData:(id)a1;

@end
